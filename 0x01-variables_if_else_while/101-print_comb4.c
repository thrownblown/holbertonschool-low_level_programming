#include <stdio.h>

/**
 * main - prints three numbers according to a bunch of weird rules
 * Return: Always 0 (Success)
 */
int main(void)

{
	int i = 48;
	int n = 48;
	int m = 48;

	while (i < 58)
	{
		while (m < 58)
		{
			if (i != m)
			{
				while (n < 58)
				{
					if (i != n && m != n)
					{
						putchar(i);
						putchar(m);
						putchar(n);
						if (m != 56 ||  (i != 55 || n != 57))
						{
							putchar(',');
							putchar(' ');
						}
					}
					n++;
				}
			}
			m++;
			n = m;
		}
		i++;
		m = i;
	}
	putchar('\n');
	return (0);
}
