#include "main.h"

/**
 * puts_half - prints the latter half of a string
 * @str: entry value
 * Return: 0
 */

void puts_half(char *str)
{
	int length = _strlen(str) - 1;
	int halfstr = length / 2;

	if (halfstr % 2 == 0)
	{
		for (halfstr++; str[halfstr]; halfstr++)
			_putchar(str[halfstr]);
	}
	_putchar('\n');
}

/**
 * _strlen - returns the lenght of a string
 * @s: entry string
 * Return: Said lenght
 */

int _strlen(char *s)
{
        int i, count = 0;

        for (i = 0; s[i]; i++)
        {
                count++;
        }
        return (count);
}
