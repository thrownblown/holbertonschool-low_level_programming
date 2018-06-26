#include "holberton.h"
/**
 * main - writes "holberton" to the terminal
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char *s = "Holberton\n";
	while (*s) _putchar(*s++);
	return (0);
}
