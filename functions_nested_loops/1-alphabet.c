#include <stdio.h>

/**
 * print_alphabet - this code will display all letters of the alphabet lwcase
 *
 * Return: 0
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
}
