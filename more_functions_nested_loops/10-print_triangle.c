#include "main.h"

/**
 * print_triangle - draws a triangle of variable lenght
 * @size: triangle lenght
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1 ; a <= size ; a++)
		{
			for (b = 1 ; b <= size ; b++)
			{
				if (b != size && b <= size - a)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
