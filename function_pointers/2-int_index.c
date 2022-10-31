/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: size of the array
 * @cmp: function used to compare on each case
 * Return: Index of the first element that is succesful in comparition
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != 00 && cmp != 00 && size >= 1)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
