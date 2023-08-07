#include "main.h"

/**
 * append_text_to_file - append text
 * @filename: file input
 * @text_content: buf input
 *
 * Return: 1 on success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	
	if (text_content != NULL)
	{
		count = write(fd, text_content, sizeof(text_content));
		if (count == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
