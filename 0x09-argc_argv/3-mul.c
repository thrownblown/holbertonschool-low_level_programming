#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of the first 2 argvs
 * @argc: count of command line
 * @argv: the command line args
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int retval;

	if (argc > 2)
	{
		retval = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", retval);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
