#include "main.h"

/**
 * main - check the code. :)
 * @argc: number of arguments passed
 * @argv: arguments passed
 * Return: sabes q no ñeri
 */

int main(int argc, char **argv)
{
	int fdfrom, fdto, wr, buf = 1024;
	char *buffer = malloc(1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to"), exit(97);
	}
	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fdfrom);
		exit(99);
	}
	while (buf == 1024)
	{
		buf = read(fdfrom, buffer, 1024);
		if (buf == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(fdto, buffer, buf);
		if (wr < buf)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fdfrom) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfrom), exit(100);
	if (close(fdto) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdto), exit(100);
	return (0);
}
