#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string. its length is limited by n
 * @n: ammount of bytes that s2 is allowed to have
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strdes = 00;

	if (s1 == 00)
		s1 = "";
	if (s2 == 00)
		s2 = "";
	strdes = malloc((_strlen(s1) + n + 1) * sizeof(char));
	if (strdes == 00)
		return (strdes);
	strdes = _strcpy(strdes, s1);
	strdes = _strncat(strdes, s2, n);
	return (strdes);
}

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

/**
 * *_strcpy - copies the value of a string to another string
 * @src: copied string
 * @dest: destination string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	while (*(src + count) != '\0')
		count++;
	for (i = 0; i <= count; i++)
		*(i + dest) = *(i + src);
	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: entry value
 * Return: said length
 */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i]; i++)
		count++;
	return (count);
}
