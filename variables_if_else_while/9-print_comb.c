#include <stdio.h>

/**
 * main - this code will dispay all numbers from 0 to 9
 *
 * Return: 0
 *
 */

int main(void)
{
	int c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
