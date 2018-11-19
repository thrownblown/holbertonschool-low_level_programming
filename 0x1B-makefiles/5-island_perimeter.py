#!/usr/bin/python3
''' island life '''


def island_perimeter(grid):
    ''' calcs perimeter of an island in a matrix '''
    perimeter = 0
    pre = 0
    nxt = 0
    for i, row in enumerate(grid):
        # import pdb; pdb.set_trace()
        rowsum = sum(row)
        try:
            nxt = sum(grid[i + 1])
        except IndexError:
            nxt = 0
        if rowsum > pre:
            perimeter += rowsum - pre + 2
        elif rowsum < pre:
            perimeter += rowsum - nxt + 2
        else:
            perimeter += 2
        pre = rowsum
    return(perimeter)
