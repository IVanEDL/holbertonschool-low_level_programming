#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - will assign a random number
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int num = n;

	if (n > 0)
	{
		printf("%i is positive", num);
	}
	else if (n == 0)
	{
		printf("%i is zero", num);
	}
	else
	{
		printf("%i is negative", num);
	}
	return (0);
}
