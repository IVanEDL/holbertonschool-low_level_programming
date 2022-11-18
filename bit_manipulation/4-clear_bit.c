#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: entry number
 * @index: index
 * Return: 1 if works, -1 if worksn't.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
