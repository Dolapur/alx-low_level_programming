#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length, wr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (length = 0; text_content[length];)
		length++;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	wr = write(fd, text_content, length);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);
	return (1);
}
