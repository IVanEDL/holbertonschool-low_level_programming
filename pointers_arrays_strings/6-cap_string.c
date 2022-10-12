/**
 * cap_string - Puts caps in words after some separators
 * @a: entry string
 * Return: Higher capped characters
 */

char *cap_string(char *a)
{
	int i, c;
	char sep [13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (a[0] >= 97 && a[0] <= 122)
		a[0] = (a[0] - 32);
	for (i = 0; a[i]; i++)
	{
		for (c = 0; c <= 12; c++)
		{
			if (a[i] == sep[c] && a[i + 1] >= 97 && a[i + 1] <= 122)
				a[i + 1] =  (a[i + 1] - 32);
		}
	}
	return (a);
}
