#!/usr/bin/python3

"""File calculating perimeter of an island"""


def island_perimeter(grid):
    """
    Returns the perimeter of an island.
    Perimeter is 0 if not 1 finded in the array, means there is no island,
    each time it has a land near it reduce the perimeter value by one or
    like the same way opposite if there is water add one
    """
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                #check cell up
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                #check cell below
                if row == len(grid) - 1 or grid[row + 1][col] == 0:
                    perimeter += 1
                #check cell left
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                #check cell right
                if col == len(grid[row]) - 1 or grid[row][col + 1] == 0:
                    perimeter += 1
    return (perimeter)
