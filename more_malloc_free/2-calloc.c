#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements on the array
 * @size: size of the elements on the array
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array = 00;
	unsigned int i;

	if (size <= 0 || nmemb <= 0)
		return (00);
	array = malloc(nmemb * size);
	if (array == 00)
		return (array);
	for (i = 0; i < nmemb * size; i++)
		array[i] = 0;
	return (array);
}
