#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number by which the bit will be gotten
 * @index: said index
 * Return: the value, lmao
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
