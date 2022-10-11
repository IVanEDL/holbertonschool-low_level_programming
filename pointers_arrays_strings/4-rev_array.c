/**
 * reverse_array - reverses the content of an array of integers
 * @n: number of elements in the array
 * @*a: array
 * Return: no
 */

void reverse_array(int *a, int n)
{
	int e, aux;

	for (e = 0; e <= n / 2 ; e++)
	{
		aux = a[e];
		a[e] = a[n - e - 1];
		a[n - e - 1] = aux;
	}
}
