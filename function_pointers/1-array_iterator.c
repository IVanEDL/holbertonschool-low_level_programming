#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: entry array
 * @size: max size of the array
 * @action: pointer to the executed function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (action != 00 && array != 00)
			action(array[i]);
	}
}
