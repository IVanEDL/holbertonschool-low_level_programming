#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - will assign a random number to the variable n
 * and give a different answer depending of its last number
 * Return: 0
 */
int main(void)
{
	int n;
	int lastsos;
	char string[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastsos = n % 10;
	if (lastsos > 5)
		printf("%s %i is %i and is greater than 5\n", string, n, lastsos);
	else if (lastsos == 0)
		printf("%s %i is %i and is 0\n", string, n, lastsos);
	else if (lastsos < 6 && lastsos != 0)
		printf("%s %i is %i and is less than 6 and not 0\n", string, n, lastsos);
	return (0);
}
