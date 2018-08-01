#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - puts a char
 * @valist: arg
 *
 * Return: nope just print
 */

void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - prints an int
 * @valist: arg
 *
 * Return: nada just print
 */

void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - puts floats
 * @valist: args
 *
 * Return: nope puts only
 */

void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - puts strs
 * @valist: arg to put
 *
 * Return: void jsut puts
 */

void print_string(va_list valist)
{
	char *string = va_arg(valist, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}

/**
 * print_all - function that prints anything
 * @format: type of variable to print
 *
 * Return: nope just print
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, format);

	i = 0;
	while (format && format[i])
	{
		i++;
		switch (format[i - 1])
		{
			case 'i':
				print_int(valist);
				break;
			case 'f':
				print_float(valist);
				break;
			case 'c':
				print_char(valist);
				break;
			case 's':
				print_string(valist);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}

	printf("\n");

	va_end(valist);

}
