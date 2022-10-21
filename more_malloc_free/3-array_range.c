#include "main.h"

/**
 * array_range - creates an array of integers ordered from min to max
 * @min: first value of the array
 * @max: last value of the array
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (00);
	for (i = 0; i + min <= max; i++)
		;
	array = malloc(sizeof(int) * i);
	if (array == 00)
		return (00);
	for (i = 0; i + min <= max; i++)
		array[i] = i + min;
	return (array);
}
