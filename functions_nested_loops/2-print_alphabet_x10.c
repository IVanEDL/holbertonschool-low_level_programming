#include <stdio.h>

/**
 * print_alphabet_x10 - this code displays alphabet 10 times lmao
 *
 * Return: 0
 *
 */

void print_alphabet_x10(void)
{
	char c;
	char eo = 1;

	while (eo <= 10)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			putchar(c);
		}
		putchar('\n');
		eo++;
	}
}
