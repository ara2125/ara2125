#ifndef GROWPLANT_H
#define GROWPLANT_H

#include <stdio.h>
#include <stdlib.h>

typedef signed int fix15;

// Fixed-point arithmetic macros
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

// Animation parameters
#define FRAME_DELAY_MS 50  // Milliseconds between frames

// Forward declaration
typedef struct TreeNode TreeNode;

// Core tree structure functions
TreeNode* create_node(fix15 length, fix15 is_leaf, fix15 angle);
void add_child(TreeNode* parent, TreeNode* child);
fix15 random_fix15(fix15 min, fix15 max);
TreeNode* generate_tree(int depth, fix15 branch_length, fix15 leaf_length, 
                       fix15 branch_scale, fix15 leaf_scale);
void draw_tree(TreeNode* node, fix15 x, fix15 y, fix15 heading);
void free_tree(TreeNode* node);

// Animation functions
void draw_tree_partial(TreeNode* node, fix15 x, fix15 y, fix15 heading, float growth_percent);
void animate_tree_growth(TreeNode* tree, fix15 start_x, fix15 start_y, fix15 heading, int total_frames);

#endif /* GROWPLANT_H */