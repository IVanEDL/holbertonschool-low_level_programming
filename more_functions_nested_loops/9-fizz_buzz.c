#include <stdio.h>

/**
 * main - prints all numbers from 1 to 100
 * changes multiples of three for Fizz
 * changes multiples of five for Buzz
 * changes multiples of both for FizzBuzz
 * Return: 0
 */

int main(void)
{
	int a = 1;

	while (a < 101)
	{
		if ((a % 3) == 0 && (a % 5) == 0)
		{
			printf("FizzBuzz");
			a++;
		}
		else if ((a % 3) == 0 && (a % 5) != 0)
		{
			printf("Fizz");
			a++;
		}
		else if ((a % 3) != 0 && (a % 5) == 0)
		{
			printf("Buzz");
			a++;
		}
		else
		{
			printf("%d", a);
			a++;
		}
		if (a < 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
