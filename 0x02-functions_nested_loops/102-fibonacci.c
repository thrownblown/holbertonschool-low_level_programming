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
	unsigned long int f = 0;
	unsigned long int s = 1;

	while (i++ < 50)
	{
		if (i == 1)
		{
			j = i;
			continue;
		}
		else
		{
			j = f + s;
			f = s;
			s = j;
		}
		printf("%li", j);
		if (i < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
