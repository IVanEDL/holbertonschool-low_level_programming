/**
 * factorial - returns the factorial of a number
 * @n: entry number
 * Return: factorial of entry number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
	{
		return (n * factorial(n - 1));
	}
}
