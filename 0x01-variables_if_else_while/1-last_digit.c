
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - prints n and if it is greater or less than 5 or zero to the term
 * Return: Zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int m;
	m = n % 10;

	if (n == 0)
	{
		printf("Last digit of %i and is 0\n", n);
	}
	else if (n > 5)
	{
		printf("Last digit of %i and is greater than 5\n", n);
	} else
	{
		printf("Last digit of %i and is less than 6 and not 0\n", n);
	}
	return (0);
}
