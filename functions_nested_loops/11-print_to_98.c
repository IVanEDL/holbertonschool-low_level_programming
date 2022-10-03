#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers between n and 98
 * @n: entry number
 * Return: 98
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
