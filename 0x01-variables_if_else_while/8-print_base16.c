#include <stdio.h>

/**
 * main -  putchars the hex numbers below 16
 * Return: Always 0 (Success)
 */
int main(void)

{
	char i = '0';

	while (i <= '9')
	putchar(i++);

	i = 'a';

	while (i <= 'f')
	putchar(i++);

	putchar('\n');
	return (0);
}
