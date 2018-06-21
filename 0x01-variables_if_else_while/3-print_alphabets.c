#include <stdio.h>

/**
 * main -  prints the lowercase then the uppercase alphabet
 * Return: Always 0 (Success)
 */
int main(void)

{
	int i = 0;
	char letters[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLYMNOPQRSTUVWXYZ";

	while (i < 53)
	{
		putchar(letters[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
