#include "main.h"

/**
 * create_file - create a file
 * @filename: file input
 * @text_content: buffer input
 *
 * Return: 1 on success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	size_t fd;
	int count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		count = write(fd, text_content, sizeof(text_content));
		if (count == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
