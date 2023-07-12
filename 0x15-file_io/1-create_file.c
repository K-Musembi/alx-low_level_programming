#include "main.h"

/**
* create_file - creates file
* @filename: input
* @text_content: input
*
* Return: 1 on success, else -1
*/
int create_file(const char *filename, char *text_content)
{
	int fd, count;

	/*length = strlen(text_content);*/
	/*path = malloc(sizeof(char) * (length + 1));*/

	if (filename == NULL)
	{
		/*free(path);*/
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1 || chmod(filename, 0600) == -1)
	{
		/*free(path);*/
		return (-1);
	}
	count = write(fd, text_content, strlen(text_content));
	if (count == -1)
	{
		/*free(path);*/
		return (-1);
	}
	return (1);
}
