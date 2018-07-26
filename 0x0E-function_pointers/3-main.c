#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
  * main - quick maths
  * @argc: arg count
  * @argv: arg array
  * Return: nada just prints
  */

int main(int argc, char **argv)
{
	int a, b, retval;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[3][0] == '0' && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	retval = (*get_op_func(argv[2]))(a, b);

	printf("%d\n", retval);

	return (0);
}
