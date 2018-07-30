#include "holberton.h"
#include <stdio.h>
void print_number(int n)
{
	int i, num, tens;
	
	tens = n;
	i= -1;
	while (tens / 10 != 0)
	{
		tens /= 10;
		i ++;
	}
	
	if (n < 0)
	{
		_putchar('-');
	}
	while (i > 0)
	{
		num = n / (10 ^ i);
		if (num < 0)
		{
			num = num * -1;
		}
		_putchar(num + '0');

		i--;
	}
	_putchar('\n');
}
