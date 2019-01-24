#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (!array)
        return(-1);
    while (i < size)
    {
        printf("Value checked array[%lu] = [%i]\n", i, array[i]);
        if (array[i] == value)
            return(i);
        i++;
    }
    return(-1);
}