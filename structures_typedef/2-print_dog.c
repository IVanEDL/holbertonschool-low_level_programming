#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog
 * @d: pointer to a structure of a dog
 * Return: no
 */

void print_dog(struct dog *d)
{
	if (d != 00)
	{
		if (d->name == 00)
			d->name = "(nil)";
		if (d->age == 00)
			d->age = 0;
		if (d->owner == 00)
			d->owner = "(nil)";
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
