#include "main.h"

/**
* _strspn - gets length of a prefix
* @s: first input
* @accept: second input
*
* Return: length
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int length = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		length++;
	}
	length++;
	return (length * 1);
}
