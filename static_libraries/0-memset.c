#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled with bytes
 * @b: constante byte
 * @n: quantity of memory to be filles
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
		s[i] = b;
	return (s);
}
