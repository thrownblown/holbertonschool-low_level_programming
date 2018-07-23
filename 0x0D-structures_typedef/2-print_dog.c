#include <stdio.h>
#include "dog.h"

/**
 * print_dog - pprints a donggy name, its age (human years) amd owner
 * @d: puppers to print
 *
 * Return: nada
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	char *n, *o;

    if (d->name)
		n = d->name;
	else
		n = "(nil)";
	if (d->owner)
		o = d->owner;
	else
		o = "(nil)";
	if (d->age)
		printf("Namie: %s\nAge: %.6f\nOwner: %s\n", n, d->age , o);
	else
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", n, o);
}
