/**
 * _memcpy - copies n bytes from a memory area src to a memory area dest
 * @n: number of bytes
 * @src: source mem area
 * @dest: destination mem area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
		dest[i] = src[i];
	return(dest);
}
