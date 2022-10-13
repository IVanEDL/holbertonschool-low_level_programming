/**
 * _strpbrk - returns the string since a certain byte correlates
 * @s: string
 * @accept: bytes to check about
 * Return: substring since condition is reached
 */

char *_strpbrk(char *s, char *accept)
{
	int e, f;

	for (e = 0; s[e] != '\0'; e++)
	{

		for (f = 0; accept[f] != '\0'; f++)
		{
			if (accept[f] == s[e])
			{
				for (; e != '\0'; e++)
					return (&s[e]);
				break;
			}
		}
	}
	if (accept[f] == s[e])
		return (&s[e]);
	else
		return ('\0');
}
