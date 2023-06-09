#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: first input
* @argv: second input
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;
	int multiple = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
			multiple *= atoi(argv[i]);
	}
	printf("%d\n", multiple);
	return (0);
}
