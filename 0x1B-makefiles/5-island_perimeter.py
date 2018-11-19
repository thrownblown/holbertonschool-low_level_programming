#!/usr/bin/python3
''' island life '''


def island_perimeter(grid):
    ''' calcs perimeter of an island in a matrix '''
    perimeter = 0
    pre = 0
    nxt = 0
    for i, row in enumerate(grid):
        rowsum = sum(row)
        try:
            nxt = sum(grid[i + 1])
        except IndexError:
            nxt = 0
        if rowsum > 0:
            perimeter += 2
        if rowsum > pre:
            perimeter += rowsum - pre
        if rowsum > nxt:
            perimeter += rowsum - nxt
        pre = rowsum
    return(perimeter)
