#include "main.h"

/**
 * swap_int - changes the values of two ints.
 * @a: first entry value
 * @b: second entry value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int *p = a;
	int *n = b;

	*n = *a;
	*p = *b;
}
