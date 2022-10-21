#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string. its length is limited by n
 * @n: ammount of bytes that s2 is allowed to have
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strdes = 00;
	int i = 0;
	unsigned int a;
	int p;
	unsigned int r;

	if (s1 == 00)
		s1 = "";
	if (s2 == 00)
		s2 = "";
	for (p = 0; s1[p] != '\0'; p++)
		;
	for (r = 0; s2[r] != '\0'; r++)
		;
	if (r >= n)
		i = n;
	strdes = malloc((i + p + 1) * sizeof(char));
	if (strdes == 00)
		return (strdes);
	for (a = 0; s1[a] != '\0'; a++)
		strdes[a] = s1[a];
	for (a = 0; a < n && s2[a] != '\0'; a++)
		strdes[a + p] = s2[a];
	strdes[a + p + 1] = '\0';
	return (strdes);
}
