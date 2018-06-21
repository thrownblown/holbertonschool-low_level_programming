#include <stdio.h>

/**
 * main - prints the numbers 00 and above and below 100
 * Return: Always 0 (Success)
 */
int main(void)

{
	int i = 48;
	int m = 48;

	while (i < 58)
	{
		while (m < 58)
		{
			putchar(i);
			putchar(m++);
			if (m != 58 || i != 58)
			{
				putchar(',');
				putchar(' ');
			}
		}
		m = 48;
		i++;
	}
	putchar('\n');
	return (0);
}
