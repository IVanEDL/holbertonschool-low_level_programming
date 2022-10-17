/**
 * _strlen_recursion - returns the length of a string
 * @s: entry string
 * Return: strings length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (i);

	i = (_strlen_recursion(s + 1) + 1);
	return (i);
}
