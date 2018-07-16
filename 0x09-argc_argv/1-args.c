#include <stdio.h>

/**
 * main - prints the num of args the terminal
 * @argc: count of command line
 *
 * Return: 0 success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
