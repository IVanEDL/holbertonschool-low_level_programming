#include "main.h"

/**
 * print_rev - prints a string, reversed
 * @s: entry value
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	for (; i >= 0; i--)
		if (s[i] != '\0')
			_putchar(s[i]);
	_putchar('\n');
}
