#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints ints
 * @separator: int inbetweener stringer
 * @n: int to print count
 * Return: nope void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list val;
	unsigned int i;

	va_start(val, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(val, int));

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
