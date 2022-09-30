#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: entry number
 * Return: depends
 */

int print_sign(int n)
{
	if (n > '0')
	{
		putchar('+');
			return (1);
	}
	if (n < '0')
	{
		putchar('-');
			return (-1);
	}
	putchar('0');
		return (0);
}
