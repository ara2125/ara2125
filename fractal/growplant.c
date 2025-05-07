#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "vga16_graphics.h"
#include "pico/stdlib.h"

typedef signed int fix15;
#define multfix15(a,b) ((fix15)((((signed long long)(a))*((signed long long)(b)))>>15))
#define float2fix15(a) ((fix15)((a)*32768.0)) // 2^15
#define fix2float15(a) ((float)(a)/32768.0)
#define absfix15(a) abs(a)
#define int2fix15(a) ((fix15)(a << 15))
#define fix2int15(a) ((int)(a >> 15))
#define char2fix15(a) (fix15)(((fix15)(a)) << 15)
#define divfix(a,b) (fix15)(div_s64s64( (((signed long long)(a)) << 15), ((signed long long)(b))))

// Maximum number of children per node
#define MAX_CHILDREN 4

// Forward declaration
typedef struct TreeNode TreeNode;

// Tree node structure
struct TreeNode {
	fix15 length;
	fix15 is_leaf;
	fix15 angle;
	int num_children;
	TreeNode* children[MAX_CHILDREN];
};

// Function to create a new tree node
TreeNode* create_node(fix15 length, fix15 is_leaf, fix15 angle) {
	TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
	node->length = length;
	node->is_leaf = is_leaf;
	node->angle = angle;
	node->num_children = 0;
    
	// Initialize children to NULL
	for (int i = 0; i < MAX_CHILDREN; i++) {
    	node->children[i] = NULL;
	}
    
	return node;
}

// Function to add a child to a node
void add_child(TreeNode* parent, TreeNode* child) {
	if (parent->num_children < MAX_CHILDREN) {
    	parent->children[parent->num_children] = child;
    	parent->num_children++;
	}
}

// Random number function (fixed point)
fix15 random_fix15(fix15 min, fix15 max) {
	// Generate a random integer between 0 and RAND_MAX
	int rand_val = rand();
    
	// Scale to fixed-point range
	fix15 range = max - min;
	fix15 scaled = min + multfix15(int2fix15(rand_val % 10000), divfix(range, int2fix15(10000)));
    
	return scaled;
}

// Generate a tree with random branching
TreeNode* generate_tree(int depth, fix15 branch_length, fix15 leaf_length,
                   	fix15 branch_scale, fix15 leaf_scale) {
	if (depth == 0) {
    	return create_node(leaf_length, int2fix15(1), int2fix15(0));
	}
    
	// Create root branch
	TreeNode* root = create_node(branch_length, int2fix15(0), int2fix15(0));
    
	// Randomly determine number of branches (2-4)
	int num_branches = (rand() % 3) + 2;
    
	// Generate child branches with random angles
	for (int i = 0; i < num_branches; i++) {
    	// Random angle between -60 and 60 degrees
    	fix15 branch_angle = int2fix15((rand() % 121) - 60);
   	 
    	// Random scaling factor between 0.85 and 0.95
    	fix15 random_scale = float2fix15(0.85 + ((float)(rand() % 10) / 100.0));
   	 
    	// Some branches might be shorter
    	fix15 length_modifier = float2fix15(0.8 + ((float)(rand() % 20) / 100.0));
   	 
    	TreeNode* child = generate_tree(
        	depth - 1,
        	multfix15(multfix15(branch_length, branch_scale), length_modifier),
        	multfix15(multfix15(leaf_length, leaf_scale), length_modifier),
        	multfix15(branch_scale, random_scale),
        	multfix15(leaf_scale, random_scale)
    	);
   	 
    	child->angle = branch_angle;
    	add_child(root, child);
	}
    
	return root;
}

// Function to draw a tree using VGA library
void draw_tree(TreeNode* node, fix15 x, fix15 y, fix15 heading) {
	// Calculate endpoint based on angle and length
	fix15 new_heading = heading + node->angle;
    
	// Convert from fixed-point to radians for sine/cosine
	float angle_rad = fix2float15(new_heading) * 3.14159265 / 180.0;
    
	// Calculate endpoint coordinates
	fix15 end_x = x + multfix15(node->length, float2fix15(cos(angle_rad)));
	fix15 end_y = y + multfix15(node->length, float2fix15(sin(angle_rad)));
    
	// Set color based on node type
	char color = node->is_leaf ? GREEN : BROWN;
    
	// Draw the current segment
	drawLine(fix2int15(x), fix2int15(y), fix2int15(end_x), fix2int15(end_y), color);
    
	// Draw all children
	for (int i = 0; i < node->num_children; i++) {
    	if (node->children[i] != NULL) {
        	draw_tree(node->children[i], end_x, end_y, new_heading);
    	}
	}
}

// Function to free the tree structure
void free_tree(TreeNode* node) {
	if (node == NULL) return;
    
	// Free all children first
	for (int i = 0; i < node->num_children; i++) {
    	if (node->children[i] != NULL) {
        	free_tree(node->children[i]);
    	}
	}
    
	// Free the current node
	free(node);
}

static PT_THREAD (update_tree(struct pt *pt)){
	PT_BEGIN(pt);
	TreeNode* new_root = create_node();

}

int main() {
	// Initialize the VGA system
	initVGA();
    
	// Seed the random number generator
	srand(5145);
    
	// Generate tree structure
	TreeNode* tree = generate_tree(6, int2fix15(70), int2fix15(20),
                             	float2fix15(0.95), float2fix15(0.95));
    
	// Draw the tree (start from middle bottom of the screen, pointing up)
	draw_tree(tree, int2fix15(320), int2fix15(480), int2fix15(-90));
    
	// Free the tree structure
	free_tree(tree);
    
	// Wait forever
	while(1) {
    	sleep_ms(100);
	}
    
	return 0;
}
