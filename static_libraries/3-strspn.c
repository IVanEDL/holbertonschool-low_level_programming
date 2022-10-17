/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: bytes to check about
 * Return: number of bytes in the segment that correlate
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int e, f, bol;

	for (e = 0; s[e] != '\0'; e++)
	{
		bol = 1;

		for (f = 0; accept[f] != '\0'; f++)
		{
			if (accept[f] == s[e])
			{
				i++;
				bol = 0;
			}
		}
		if (bol == 1)
		{
			break;
		}
	}
	return (i);
}
