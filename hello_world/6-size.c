#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	char cha;
	int in;
	long int loint;
	long long int lolint;
	float flot;

	printf("Size of a char: %zu byte(s)\n", sizeof(cha));
	printf("Size of an int: %zu byte(s)\n", sizeof(in));
	printf("Size of a long int: %zu byte(s)\n", sizeof(loint));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lolint));
	printf("Size of a float: %zu byte(s)\n", sizeof(flot));
	return (0);
}
