#include "main.h"

/**
 * jack_bauer - prints all minutes of a day
 * Return: 0
 */

void jack_bauer(void)
{
	int h;
	int m;

	while (h < 24)
	{
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}

