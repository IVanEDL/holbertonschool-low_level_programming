#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include "_strdup.c"
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to the new dog, 00 if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogcpy;

	if (name != 00 && owner != 00)
	{
		dogcpy = malloc(sizeof(dog_t));
		if (dogcpy == 00)
			return (00);
		dogcpy->name = _strdup(name);
		if (dogcpy->name == 00)
		{
			free(dogcpy);
			return (00);
		}
		dogcpy->age = age;
		dogcpy->owner = _strdup(owner);
		if (dogcpy->owner == 00)
		{
			free(dogcpy->name);
			free(dogcpy);
			return (00);
		}
	}
	return (dogcpy);
}
