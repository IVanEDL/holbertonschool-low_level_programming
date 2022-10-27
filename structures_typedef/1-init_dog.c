#include "dog.h"

/**
 * init_dog - initializes a dog
 * @d: pointer to the structure of a dog
 * @name: pointer to a char name
 * @age: pointer to a float age
 * @owner: pointer to a char owner name
 *
 * Return: no
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 00)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
