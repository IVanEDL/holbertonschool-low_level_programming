#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: entry number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (auxsqrt(n, 1));
}

/**
 * auxsqrt - auxiliates in the calculation of a square root
 * @e: entry value
 * @i: auxiliar value
 * Return: result
 */

int auxsqrt(int e, int i)
{
	if (e == (i * i))
		return (i);
	else if (e > (i * i))
	{
		return (auxsqrt(e, i + 1));
	}
	else
		return (-1);
}
