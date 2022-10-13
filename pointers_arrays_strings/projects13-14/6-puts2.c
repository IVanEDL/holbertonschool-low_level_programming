#include "main.h"

/**
 * puts2 - prints the even characters from a string
 * @str: entry value
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
