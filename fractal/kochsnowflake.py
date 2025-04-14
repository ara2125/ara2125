"""
Python implementation of recursive algorithm illustrating a Koch snowflake using
Turtle Graphics. Increasing the depth of this snowflake increases the complexity of the
snowflake drawn.
"""

import turtle

def drawbump(depth):
    if (depth == 0):
        turtle.forward(10)
    else:
        drawbump(depth-1)
        turtle.left(60)
        drawbump(depth-1)
        turtle.right(120)
        drawbump(depth-1)
        turtle.left(60)
        drawbump(depth-1)


def drawflake(depth):
    turtle.left(60)
    drawbump(depth)
    turtle.right(120)
    drawbump(depth)
    turtle.right(120)
    drawbump(depth)


drawflake(3)

