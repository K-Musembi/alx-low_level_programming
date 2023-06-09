#include <stdio.h>

/**
* main - prints argument count
* @argc: first input
* @argv: second input
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
