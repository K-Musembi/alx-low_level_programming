#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: first input
* @src: second input
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	char *inc = dest;

	for (i = 0; *inc; i++)
	{
		inc++;
	}
	for (j = 0; *src; j++)
	{
		*inc = *src;
		src++;
		inc++;
	}
	return (dest);
}
