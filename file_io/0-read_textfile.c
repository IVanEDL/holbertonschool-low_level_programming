#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: said text file
 * @letters: the letters supposed to be printed
 * Return: the actual number of letters that could been read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, p;
	char *bf;

	if (filename == 00)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bf = malloc(letters + 1);
	if (bf == 00)
		return (0);
	i = read(fd, bf, letters);
	if (i == -1)
		return (0);
	bf[letters + 1] = 00;
	close(fd);
	p = write(STDOUT_FILENO, bf, i);
	if (p == -1)
		return (0);
	free(bf);
	return (i);
}
