#include <stdio.h>

/**
 * main - prints prits each of argv
 * @argc: count of command line
 * @argv: the command line args
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
