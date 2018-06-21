
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
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m == 0)
	printf("Last digit of %d is %d and is 0\n", n, m);
	else
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
