#include <stdio.h>
#define BIG 612852475143
/**
 * main - prints the larges prime factor of BIG.
 *
 * Return: void
 */

int main(void)
{
	long int max = BIG;
	long int i = 2;

	while (i < max)
	{
		if (max % i == 0)
			max /= i;
		else
			i++;
	}
	printf("%li\n", i);
	return (0);
}

