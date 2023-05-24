#!/usr/bin/python3
"""Module that calculates the perimeter of an island"""

def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # check top edge
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # check bottom edge
                if i == rows - 1 or grid[i+1][j] == 0:
                    perimeter += 1
                # check left edge
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # check right edge
                if j == cols - 1 or grid[i][j+1] == 0:
                    perimeter += 1
    return perimeter
