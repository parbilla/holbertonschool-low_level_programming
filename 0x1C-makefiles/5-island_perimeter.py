#!/usr/bin/python3
"""Function that returns the perimeter of the island described in grid"""

def island_perimeter(grid):
    """Returns perimeter"""

    perim = 0
    for x in range(1,len(grid)-1):
        for y in range(1,len(grid[0])-1):
            if grid[x][y] == 1:
                if grid[x-1][y] == 0:
                    perim += 1
                if grid[x][y-1] == 0:
                    perim += 1
                if grid[x][y+1] == 0:
                    perim += 1
                if grid[x+1][y] == 0:
                    perim += 1
    return perim
