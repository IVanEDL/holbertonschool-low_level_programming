#include "main.h"

/**
 * apprend_text_to_file - appends text at the end of a file
 * @filename: said file
 * @text_content: the text to be appended
 * Return: 1 if it works, -1 if it doesnt
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == 00)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == 00)
		return (1);
	wr = write(fd, text_content, sizeof(text_content));
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
