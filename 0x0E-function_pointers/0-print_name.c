#include "function_pointers.h"

/**
 * print_name - supplies a variable to a funtion
 * @name: var to give to print func
 * @f: print func
 *
 * Return: nope
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
