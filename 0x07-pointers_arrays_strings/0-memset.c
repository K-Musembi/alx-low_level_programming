#include "main.h"

/**
* _memset - fill memory with constant byte
* @s: first input
* @b: second input
* @n: third input
*
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
