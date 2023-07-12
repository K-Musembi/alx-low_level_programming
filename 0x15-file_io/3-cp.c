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
	/*int res;*/

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	copy(argv[1], argv[2]);
	/*dprintf(STDOUT_FILENO, "%d", res);*/

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
	char buf[1024];

	fd1 = open(one, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file ONE\n");
		exit(98);
	}

	fd2 = open(two, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant't write to file two\n");
		exit(99);
	}
	if (chmod(two, 0664) == -1)
		return (-1);
	while ((count1 = read(fd1, buf, 1024)) > 0)
	{
		count2 = write(fd2, buf, count1);
		if (count2 != count1)
			return (-1);
	}
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
	return (1);
}
