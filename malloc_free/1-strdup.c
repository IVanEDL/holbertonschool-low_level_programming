#include "main.h"

/**
 * _strdup - returns a pointer to a string which is a dupe of string str
 * @str: string to be duplicated
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dupe = 00;
	int i = 0, count = 0, a = 0;

	if (str == 00)
		return (dupe);
	for (i = 0; str[i]; i++)
		count++;
	dupe = malloc(sizeof(char) * count + 1);
	if (dupe == 00)
		return (dupe);
	for (a = 0; a <= count; a++)
		dupe[a] = str[a];
	return (dupe);
}
