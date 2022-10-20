#include "main.h"

/**
 * str_concat - concatenates two strigs
 * @s1: string 1 to concatenate
 * @s2: string 2 to concatenate
 * Return: pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *dest = 00;
	int i = 0;
	int a = 0;
	int p;
	int r;

	if (s1 == 00)
		s1 = "";
	if (s2 == 00)
		s2 = "";
	for (; s1[i] != '\0'; i++)
	{
	}
	for (; s2[a] != '\0'; a++)
	{
	}
	dest = malloc(sizeof(char) * (i + a) + 1);
	if (dest == 00)
		return (dest);
	for (r = 0; s1[r] != '\0'; r++)
		dest[r] = s1[r];
	for (p = 0; s2[p] != '\0'; p++)
		dest[r + p] = s2[p];
	return (dest);
}
