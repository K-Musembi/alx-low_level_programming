#include "main.h"

/**
* _memcpy - copies memory data
* @dest: first input
* @src: second input
* @n: third input
*
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
