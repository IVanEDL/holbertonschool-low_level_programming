#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: integers of the matrix
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, m = 0, n = 0;

	for (i = 1; i <= size; i++)
	{
		m += a[i * (size - 1)];
	}
	for (i = 0; i < size; i++)
	{
		n += a[i * (size + 1)];
	}
	printf("%d, %d\n", n, m);
}
