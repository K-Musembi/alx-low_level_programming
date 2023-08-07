#include "main.h"

/**
 * read_textfile - read text file and print on stdout
 * @filename: file input
 * @letters: size input
 *
 * Return: number of letters printed, or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t fd;
	int num, count;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
	{
		free(buf);
		return (0);
	}

	fd = open(filename, O_RDWR);
	count = read(fd, buf, letters);
	if (count == -1)
	{
		free(buf);
		return (0);
	}

	num = write(STDOUT_FILENO, buf, count);
	if (num == -1)
	{
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);
	return (num);
}
