#include "main.h"

/**
 * _islower - returns 1 if a char is lowercase, 0 if not
 * @c: entry number
 * Return: 0 or 1 depends on the result
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
