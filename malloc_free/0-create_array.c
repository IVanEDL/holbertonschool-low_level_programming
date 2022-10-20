#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the char
 * @c: char with the chars of the array will be inicialited
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr = 00;
	unsigned int i;

	if (size == 00)
		return (arr);
	arr = malloc(sizeof(char) * size);
	if (arr == 00)
		return (arr);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
