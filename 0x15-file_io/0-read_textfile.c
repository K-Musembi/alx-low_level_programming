#include "main.h"

/**
* read_textfile - read and print text file
* @filename: input
* @letters: input
*
* Return: number printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num, count;
	char *path = malloc(letters * sizeof(char));

	if (filename == NULL)
	{
		free(path);
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(path);
		return (0);
	}

	count = read(fd, path, letters);
	num = write(fd, path, count);
	if (num == -1)
	{
		free(path);
		return (0);
	}

	free(path);
	close(fd);
	return (num);
}
