#include <stdio.h>
#define MAX 8000000000000000000
#define MOD 1000000000
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

	while (i++ <= 98)
	{
		if (i == 1)
		{
			j = i;
			continue;
		}
		else if ((f + s) < MAX)
		{
			j = f + s;
			f = s;
			s = j;

			printf("%li", j);
			f1 = f / MOD;
			f2 = f % MOD;
			s1 = s / MOD;
			s2 = s % MOD;
		}
		else
		{
			j1 = f1 + s1 + (f2 + s2) / MOD;
			j2 = (f2 + s2) % MOD;

			f1 = s1;
			f2 = s2;
			s1 = j1;
			s2 = j2;
			printf("%li%li", j1, j2);
		}
		if (i <= 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
