#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments in input
 * @argv: array of pointers to the arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i;

		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}

	return (0);
}
