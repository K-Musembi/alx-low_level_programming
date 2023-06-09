#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
* main - adds positive numbers
* @argc: first input
* @argv: second input
*
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int i;
	int num;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc < 2)
			printf("%d\n", 0);
		else if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			num = atoi(argv[i]);
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
