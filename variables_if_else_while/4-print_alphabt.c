#include <stdio.h>

/**
 * main - this code will display all letters of the alphabet, lowercase
 *
 * Return: 0
 *
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'e' || c != 'q')
		{
			putchar(c);
		}
	}
	putchar(10);
	return (0);
}
