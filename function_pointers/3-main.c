#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: If everything goes well, 0
 */

int main(int argc, int *argv)
{
	char op;
	int num1, num2;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	op = argv[2];
	num1 = argv[1];
	num2 = argv[3];

	if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
	{
		printf("Error\n");
		return (99);
	}

	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	calc = get_op_func(op);
	printf("%d\n", calc(num1, num2));
	return (0);
}
