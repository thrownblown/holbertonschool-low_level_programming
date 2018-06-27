#include <stdio.h>
/**
 * main - prints some fibbs.
 *
 * Return: (0) sucess
 */

int main(void)
{
	int i = 1;
	unsigned long int j = 0;
	unsigned long int f = 0;
	unsigned long int s = 1;
	unsigned long int p = 0;

	while (j < 4000000)
	{
		if (i++ == 1)
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
		if (j % 2 == 0)
			p += j;
	}
	printf("%li\n", p);
	return (0);
}
