#include <stdio.h>

/**
 * main - Entry point
 *  prints the lowercase alphabet using a loop
 * Return: Always 0 (Success)
 */
int main(void)

{
	char i = 'a';

	while (i < 'z')
	putchar(i++);
	putchar('\n');
	return (0);
}
