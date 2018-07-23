#include <stdio.h>
#include "dog.h"

/**
 * init_dog - give a dog a name, age and owner
 * @d: mem pointer for the doggy
 * @name: what to call said puppy
 * @age: human years
 * @owner: the person that feeds our pooch
 *
 * Return: nada
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
