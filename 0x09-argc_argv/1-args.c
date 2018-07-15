#include <stdio.h>

/**
 * main - prints the num of args the terminal
 * @argc: count of command line
 * @argv: the command line args
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	if (argc)
		printf("%i\n", argc - 1);
	return (0);
}
