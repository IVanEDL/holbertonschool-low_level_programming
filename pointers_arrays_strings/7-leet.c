/**
 * leet - encodes a string into leet
 * @a: entry string
 * Return: cool encoded string
 */

char *leet(char *a)
{
	int i, c;
	char let[] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
	char num[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};


	for (i = 0; a[i]; i++)
	{
		for (c = 0; c <= 10; c++)
		{
			if (a[i] == let[c])
			{
				a[i] = num[c];
				c = 10;
			}
		}
	}
	return (a);
}
