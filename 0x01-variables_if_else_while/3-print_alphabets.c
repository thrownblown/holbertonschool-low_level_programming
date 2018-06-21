#include <stdio.h>

/**
 * main - prints the lowercase then the uppercase alphabet
 * Return: Always 0 (Success)
 */
int main(void)

{
	char i = 'a';

	while (i <= 'z')
	putchar(i++);

	i = 'A';
	while (i <= 'Z')
	putchar(i++);

	putchar('\n');
	return (0);
}
