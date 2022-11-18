#include "main.h"

/**
 * binary_to_uint - traduces a binary number to unsigned integer.
 * @b: a binary number in form of a string of characters.
 * Return: said number, or 0 if its an invalid input or NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int i, p;
	unsigned int a = 0;

	if (b == 00)
		return (0);
	i = _strlen(b) - 1;
	p = _strlen(b) - 1;

	for (; i >= 0; i--)
	{
		if (b[i] == '1')
			a = a + calc(i, p);
		else if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	return (a);
}

/**
 * calc - auxiliates in the calculus of a binary to int
 * @len: length of a number
 * @i: actual number.
 * Return: part of the number.
 */

unsigned int calc(int i, int len)
{
	int r = (len - i);
	unsigned int out = 1;

	while (r > 0)
	{
		out = out * 2;
		r--;
	}
	return (out);
}

/**
 * _strlen - does the lengthy thing.
 * @string: entry string
 * Return: lengthy thing.
 */

int _strlen(const char *string)
{
	int aux;

	for (aux = 0; string[aux] != '\0'; aux++)
	{
	}
	return (aux);
}
