#include "main.h"

/**
 * *_strcpy - copies the value of a string to another string
 * @str: copied string
 * @dest: destination string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	while (*(src + count) != '\0')
	{
		count++;
	}

	for (i = 0; i <= count; i++)
	{
		*(i + dest) = *(i + src);
	}
	return (dest);
}
