#include <stdio.h>

/**
* main - prints all arguments passed
* @argc: first input
* @argv: second input
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
