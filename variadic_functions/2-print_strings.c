#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings followed by a new line
 * @separator: string to be put between strings
 * @n: number of integers passed to the function
 * Return: negativo master
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		p = va_arg(args, char *);
		if (p == 00)
			p = "(nil)";
		printf("%s", p);
		if (separator != 00 && i != n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
