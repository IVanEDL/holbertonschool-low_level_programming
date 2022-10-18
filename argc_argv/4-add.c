#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments in input
 * @argv: array of pointers to the arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, a, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (a = 0; argv[i][a]; a++)
		{
			if (isdigit(argv[i][a]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
