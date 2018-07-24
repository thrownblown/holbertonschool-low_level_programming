#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - unleash our pup from memory
 * @d: doggy to undo
 *
 * Return: nope
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
