#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: entry value
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
