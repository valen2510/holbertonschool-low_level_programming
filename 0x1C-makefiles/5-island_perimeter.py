#!/usr/bin/python3
"""Module to calculate island perimeter
"""


def island_perimeter(grid):
    """that returns the perimeter of the island described in grid

    Args:
        grid (list): matrix

    Returns:
        int : number of sides of a island
    """
    sides = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if j > 0 and grid[i][j - 1] == 1:
                    sides -= 1
                if j < len(grid[i]) - 1 and grid[i][j + 1] == 1:
                    sides -= 1
                if i > 0 and grid[i - 1][j] == 1:
                    sides -= 1
                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    sides -= 1
                sides += 4
    return sides
