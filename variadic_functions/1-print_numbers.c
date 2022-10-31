#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers followed by a new line
 * @separator: string to be put between numbers
 * @n: number of integers passed to the function
 * Return: negativo master
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int p;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(args, int);
		printf("%d", p);
		if (separator != 00 && i != n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
