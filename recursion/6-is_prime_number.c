#include "main.h"

/**
 * is_prime_number - returns 1 if input is prime, 0 if not
 * @n: input integer
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (minosprime(n, 2));
}

/**
 * minosprime - calculates if a number is prime
 * @i: entry number
 * @a: counter variable
 * Return: 1 if prime, 0 if not
 */

int minosprime(int i, int a)
{
	if (i == a)
		return (1);
	if (i % a == 0)
		return (0);
	return (minosprime(i, a + 1));
}
