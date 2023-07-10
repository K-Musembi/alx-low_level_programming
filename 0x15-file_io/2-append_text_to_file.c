#include "main.h"

/**
* append_text_to_file - add text to file
* @filename: input
* @text_content: input
*
* Return: 1 on success, else -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count;
	const char *path = filename;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND);
	count = write(fd, (char *)path, strlen(text_content));
	if (count == -1)
		return (count);

	close(fd);
	return (1);
}
