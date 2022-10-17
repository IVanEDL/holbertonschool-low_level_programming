/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character to find
 * Return: pointer to the first ocurrence of c in the string s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
		return (&s[i]);

	return ('\0');
}
