#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: first input
* @src: second input
* @n: third input
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
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
		if (sizeof(src) > n)
		{
			break;
		}
		src++;
		inc++;
	}
	return (dest);
}
