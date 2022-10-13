#include "main.h"

/**
 * *_strncpy - copies the value of a string to another string
 * @src: copied string
 * @dest: destination string
 * @n: byte number
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
