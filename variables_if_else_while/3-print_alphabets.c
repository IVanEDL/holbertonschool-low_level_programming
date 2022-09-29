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
	char cmay;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	for (cmay = 'A' ; cmay <= 'Z' ; cmay++)
	{
		putchar(cmay);
	}
	putchar(10);
	return (0);
}
