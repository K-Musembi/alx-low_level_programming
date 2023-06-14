#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenate arguments
* @ac: first input
* @av: second input
*
* Return: pointer
*/
char *argstostr(int ac, char **av)
{
	int i, j, index;
	int length = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i])
			length++;
	}
	length += ac;
	ptr = (char *)malloc(length * sizeof(char) + 1);
	index = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i])
		{
			ptr[index] = av[i][j];
			j++;
			index++;
		}
		if (i == (ac - 1))
			ptr[index] = '\0';
		if (i != (ac - 1))
			ptr[index] = '\n';
	}
	return (ptr);
}
