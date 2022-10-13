#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: the array in question
 * @n: The number of elements to call
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
		printf("%d, ", a[i]);
		}
	}
	putchar('\n');
}
