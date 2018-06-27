#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024.
 *
 * Return: (0) sucess
 */

int main(void)
{
	int i = 0;
	unsigned long int j;
	unsigned long int j1;
	unsigned long int j2;
	unsigned long int f = 0;
	unsigned long int s = 1;
	unsigned long int f1;
	unsigned long int f2;
	unsigned long int s1;
	unsigned long int s2;

	while (i++ < 98)
	{
		if (i == 1)
		{
			j = i;
			continue;
		}
		else if ((f + s) < 8000000000000000000)
		{
			j = f + s;
			f = s;
			s = j;

			printf("%li", j);
			f1 = f / 1000000000;
			f2 = f % 1000000000;
			s1 = s / 1000000000;
			s2 = s % 1000000000;
		}
		else
		{
			j1 = f1 + s1 + (f2 + s2) / 1000000000;
			j2 = (f2 + s2) % 1000000000;

			f1 = s1;
			f2 = s2;
			s1 = j1;
			s2 = j2;
			printf("%li%li", j1, j2);
		}
		if (i < 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
