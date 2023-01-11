#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array, binary search style
 * @array: the array. Or a pointer to the first element.
 * @size: size of the array
 * @value: value of the element to search
 *
 * Return: index where the value is located, -1 if failed
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle;

	if (array)
	{
		print_array(array, left, right);
		while (left <= right)
		{
			middle = (left + right)/2;
			if (array[middle] < value)
				left = middle + 1;
			else if (array[middle] > value)
				right = middle - 1;
			else
				return (middle);
			if (left <= right)
				print_array(array, left, right);
		}
		return (-1);
	}
	return (-1);
}

/**
 * print_array - prints an array omegalul
 * @array: array to print
 * @left: first index to print
 * @right: last index to print
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
		else
			printf("\n");
	}
}
