#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of argv
 * @argc: count of command line
 * @argv: the command line args
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i, j, retval;

	retval = 0;

	for (i = 1; i < argc; i++)
	{
		j = atoi(argv[i]);
		if (j == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (0);
		}
		retval += atoi(argv[i]);
	}
	printf("%i\n", retval);
	return (0);
}
