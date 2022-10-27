#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog.
 * @d: dog that isnt free yet.
 * Return: no.
 */

void free_dog(dog_t *d)
{
	if (d != 00)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
