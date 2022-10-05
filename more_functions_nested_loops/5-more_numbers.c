#include "main.h"

/**
 * more_numbers - prints from 0 to 14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int line;
	int num;

	for (line = 0; line < 10; line++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
