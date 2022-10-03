#include "main.h"

/**
 * print_last_digit - returns the last digit of a number
 * @c: entry digit
 * Return: Said last digit
 */

int print_last_digit(int c)
{
	int a = c % 10;

	if (a < 0)
	{
		a = -a;
	}

	_putchar(a + '0');
	return (a);
}
