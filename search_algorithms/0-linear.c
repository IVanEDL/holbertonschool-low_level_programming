#include "search_algos.h"

/**
 * linear_search - searchs for a value in an array of integers using linear s
 * @array: the array
 * @value: the value to be searched
 * @size: size of the array
 *
 * Return: the index of the value searched or -1 if failed
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
