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
			putchar(' ');
			a++;
		}
		else if ((a % 3) == 0 && (a % 5) != 0)
		{
			printf("Fizz");
			putchar(' ');
			a++;
		}
		else if ((a % 3) != 0 && (a % 5) == 0)
		{
			printf("Buzz");
			putchar(' ');
			a++;
		}
		else
		{
			printf("%d", a);
			putchar(' ');
			a++;
		}
	}
	return (0);
}
