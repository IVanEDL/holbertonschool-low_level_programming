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
	int i = 0;

	if (s1 == 00)
		s1 = "";
	if (s2 == 00)
		s2 = "";
	if (_strlenprime(s2) >= n)
		i = n;
	else if (_strlenprime(s2) < n)
		i = _strlen(s2);
	strdes = malloc((_strlen(s1) + i + 1) * sizeof(char));
	if (strdes == 00)
		return (strdes);
	strdes = _strcat(strdes, s1);
	strdes = _strncat(strdes, s2, n);
	return (strdes);
}

/**
 * _strlen - returns the length of a string
 * @s: entry value
 * Return: said length
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i]; i++)
	{
		count++;
	}
	return (count);
}

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
 * _strlenprime - returns the length of a string
 * @s: entry value
 * Return: said length
 */

unsigned int _strlenprime(char *s)
{
	int i;
       	unsigned int count = 0;

	for (i = 0; s[i]; i++)
	{
		count++;
	}
	return (count);
}
