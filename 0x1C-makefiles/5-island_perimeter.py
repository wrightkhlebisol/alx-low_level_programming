#!/usr/bin/python3
"""
Island Perimter: Returns perimeter of islands in the grid
"""


def island_perimeter(grid):
    """
        Takes the grid and calculates
    """
    height = len(grid)
    width = len(grid[0])
    perimeter = 0

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
            """
            if row > 1 and grid[row - 1][col] == 1:
                perimeter -= 1
            if row < width and grid[row + 1][col] == 1:
                perimeter -= 1
            if col < width - 1 and grid[row][col - 1] == 1:
                perimeter -= 1
            if col < width - 1 and  grid[row][col + 1] == 1:
                perimeter -= 1
            """

    return perimeter * 2
