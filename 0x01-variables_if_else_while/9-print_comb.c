#include <stdio.h>

/**
 * main - prints the numbers 0 and above and below 10
 * Return: Always 0 (Success)
 */
int main(void)

{
	int i = 48;

	while (i < 58)
	{
		putchar(i++);
		if (i != 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
