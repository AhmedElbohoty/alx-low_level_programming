#!/usr/bin/python3
'''Returns the perimeter of the island described in grid'''


def island_perimeter(grid):
    '''Return the perimiter of an island.

    Notes:
        grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100.
        Grid is completely surrounded by water,
            and there is one island (or nothing).

    Args:
        grid (list): A list of list of integers.

    Returns:
        The perimeter of the island defined in grid.
    '''
    width = len(grid[0])
    height = len(grid)

    borders = 0
    squares = 0

    for i in range(height):
        for j in range(width):
            # If it is a water zone, continue.
            if grid[i][j] != 1:
                continue

            squares += 1

            prev_column = grid[i][j - 1]
            if (j > 0 and prev_column == 1):
                borders += 1

            prev_row = grid[i - 1][j]
            if (i > 0 and prev_row == 1):
                borders += 1

    all_borders = squares * 4
    shared_borders = borders * 2

    return all_borders - shared_borders
