/**
 * print_name - prints a name
 * @name: the name
 * @f: function that is determined by using all uppercase or as passed
 * Return: no
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 00)
		f(name);
}

