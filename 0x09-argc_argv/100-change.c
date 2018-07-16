#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: count of command line
 * @argv: the command line args
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int total, retval;

	retval = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);
	if (total < 0)
	{
		printf("0\n");
		return (0);
	}
	retval += total / 25;
	total = total % 25;
	retval += total / 10;
	total = total % 10;
	retval += total / 5;
	total = total % 5;
	retval += total / 2;
	total = total % 2;
	retval += total;

	printf("%i\n", retval);
	return (0);
}
