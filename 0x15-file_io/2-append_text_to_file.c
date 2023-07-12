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
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, mode);
	if (text_content != NULL)
	{
		count = write(fd, text_content, strlen(text_content));
		if (count == -1)
			return (-1);
	}

	return (1);
}
