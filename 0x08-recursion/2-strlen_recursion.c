#include "main.h"

/**
* _strlen_recursion - returns length of a string
* @s: input pointer
*
* Return: length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return;
	*s++;
	return (1 + _strlen_recursion(s));
}
