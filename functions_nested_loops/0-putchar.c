#include "main.h"

/**
 * main - prints _putchar
 * _putchar
 * Return: 0
 */

int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
	return (0);
}
