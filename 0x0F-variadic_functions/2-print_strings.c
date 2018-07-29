#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints all the chars
 * @separator: str btw strss
 * @n: string to print count
 * Return: nope void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list val;
	unsigned int i;
	char *str;

	va_start(val, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(val, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(val);
}
