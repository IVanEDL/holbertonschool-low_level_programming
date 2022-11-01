#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * separator - checks if a separator is needed, prints if yes
 * @i: entry variable
 * @p: max length of the string
 * Return: ñeh
 */
void separator(int i, int p)
{
	if (i < p - 1)
		printf(", ");
}
/**
 * print_all - prints whatever stuff you put
 * @format: list of types of arguments passed
 * Return: Nah
 */

void print_all(const char * const format, ...)
{
	int i = 0, p = 0;
	va_list args;
	char *a;

	if (format != 00)
	{
		p = strlen(format);
		va_start(args, format);
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					separator(i, p);
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					separator(i, p);
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					separator(i, p);
					break;
				case 's':
					a = va_arg(args, char *);
					printf("%s", a == 00 ? "(nil)" : a);
					separator(i, p);
					break;
			}
			i++;
		}
	}
	printf("\n");
}
