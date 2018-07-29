#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds up all the args
 * @n: number of args
 * Return: sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum, i;

	va_start(valist, num);
	for (i = 0; i < num; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}

