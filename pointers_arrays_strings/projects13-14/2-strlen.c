#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: entry value
 * Return: said length
 */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i]; i++)
	{
		count++;
	}
	return (count);
}
