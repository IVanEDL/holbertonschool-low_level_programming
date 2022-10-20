#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: evident
 * @height: also evident
 * Return: said pointer
 */

int **alloc_grid(int width, int height)
{
	int **arra = 00;
	int i, a;

	if (width <= 0 || height <= 0)
		return (00);
	arra = malloc(height * sizeof(int *));
	if (arra == 00)
		return (00);
	for (i = 0; i < height; i++)
	{
		arra[i] = malloc(width * sizeof(int));
		if (arra[i] == 00)
		{
			for (a = 0; a < i; a++)
				free(arra[a]);
			free(arra);
		}
	}
	for (i = 0; a < height; i++)
	{
		for (a = 0; a < width; a++)
			arra[i][a] = 0;
	}
	return (arra);
}
