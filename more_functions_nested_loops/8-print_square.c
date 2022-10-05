#include "main.h"

/**
 * print_square - prints a square of variable size
 * @size: Square size
 * Return: 0
 */

void print_square(int size)
{
	int lenght;
	int height;

	if (size > 1)
	{
		for (height = 1 ; height <= size ; height++)
		{
			for (lenght = 1 ; lenght <= size ; lenght++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
