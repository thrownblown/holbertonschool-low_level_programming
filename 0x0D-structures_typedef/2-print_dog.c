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
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
