#include "main.h"

/**
 * rev_string - reverses a string
 * @s: entry value
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int a = 0;
	char b;

	while (s[i] != '\0')
		i++;

	while (a < i--)
	{
		b = s[a];
		s[a++] = s[i];
		s[i] = b;
	}
}
