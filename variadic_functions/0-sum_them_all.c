#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all of its parameters
 * @n: number of parameters
 * Return: said sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, p = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
		p = p + va_arg(args, int);
	return (p);
}
