/**
 * *string_toupper - turns all lowercase to uppercase
 * @*: entry string
 * Return: said char
 */

char *string_toupper(char *a)
{
	int i;
	
	for (i = 0; a[i] != 0; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
	}
	return (a);
}
