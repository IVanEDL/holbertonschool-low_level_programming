#include "main.h"

/**
 * *_strncat - concatenates the value of a string to another string with limit
 * @src: copied string
 * @dest: destination string
 * @n: limit of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, count;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (count = 0; count < n && src[count] != '\0'; count++)
		dest[i + count] = src[count];
	dest[i + count] = '\0';
	return (dest);
}
