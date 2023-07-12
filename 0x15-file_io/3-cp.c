#include "main.h"

/**
* main - Entry point
* @argc: input
* @argv: input
*
* Return: 0 always
*/
int main(int argc, char **argv)
{
	int res;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	res = copy(argv[1], argv[2]);
	dprintf(STDOUT_FILENO, "%d", res);

	return (0);
}

/**
* copy - copy file
* @one: input
* @two: input
*
* Return: 1 on success, else -1
*/
int copy(const char *one, const char *two)
{
	int fd1, fd2, count1, count2;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char *buf;

	fd1 = open(one, O_RDWR, mode);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file ONE\n");
		exit(98);
	}

	fd2 = open(two, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant't write to file two\n");
		exit(99);
	}
	if (chmod(two, 0664) == -1)
		return (-1);

	buf = malloc(sizeof(char) * strlen(one));
	count1 = read(fd1, buf, strlen(buf));
	count2 = write(fd2, buf, strlen(buf));

	if (count1 == -1 || count2 == -1)
		return (-1);
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d", fd2);
		exit(100);
	}
	free(buf);
	return (1);
}
