#include "main.h"

/**
 * *_strcat - concatenates the value of a string to another string
 * @src: copied string
 * @dest: destination string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, count = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (; src[count] != '\0';)
	{
		dest[i + count] = src[count];
		count++;
	}
	dest[i + count] = '\0';
	return (dest);
}
