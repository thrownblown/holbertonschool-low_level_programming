#include <stdio.h>

/**
 * main -  prints the lowercase alphabet 'cept e & q using a loop
 * Return: Always 0 (Success)
 */
int main(void)

{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
