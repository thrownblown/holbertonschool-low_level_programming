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
			if (i != m) 
			{
				putchar(i);
				putchar(m);
				if (m != 57 ||  i != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		i++;
		m = i;
	}
	putchar('\n');
	return (0);
}
