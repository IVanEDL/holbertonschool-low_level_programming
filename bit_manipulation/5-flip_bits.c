#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: the number
 * @m: the other number.
 * Return: said number of bytes.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m, p = 0;

	for (; i > 0; i >>= 1)
		p = p + (i & 1);
	return (p);
}
