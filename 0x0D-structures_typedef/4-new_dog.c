#include <stdlib.h>
#include "dog.h"


/**
 * _strdup - copies a string
 * @str: str to cpy
 *
 * Return: pointer to new str or 0 if err
 */

char *_strdup(char *str)
{
	char *ar;
	int size;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (str[size] != '\0')
		size++;

	ar = (char *)malloc(size + 1);

	if (!ar)
		return (NULL);

	for (; size >= 0; size--)
		ar[size] = str[size];

	return (ar);
}


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
	char *n, *o;

	d = malloc(sizeof(dog_t));
	n = _strdup(name);
	o = _strdup(owner);

	if (!d || !n || !o)
	{
		free(d);
		free(n);
		free(o);
		return (0);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
