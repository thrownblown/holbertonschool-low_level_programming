#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - fido factory
 * @name: our puppy nom de plume
 * @age: our mastif's maturity
 * @owner: our canine keeper
 *
 * Return: lil bowow
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
