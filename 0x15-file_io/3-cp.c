#include "main.h"

/**
 * main - entry point
 * @argv: input
 * @argc: input
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd1, fd2, count, num;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	chmod(argv[2], 0664);
	while ((count = read(fd1, buf, 1024)) > 0)
	{
		num = write(fd2, buf, count);
		if (num != count)
			exit(98);
	}
	if (close(fd1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
