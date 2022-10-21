#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: ammount of bytes to be allocated
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem = 00;
	char i = 98;

	mem = malloc(b);
	if (mem == 00)
		exit(i);
	return (mem);
}
