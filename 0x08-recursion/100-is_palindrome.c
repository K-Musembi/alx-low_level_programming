#include "main.h"

/**
* is_palindrome - checks for a palindrome
* @s: input string
*
* Return: 1 or 0
*/
int is_palindrome(char *s)
{
	char *ptr = s;

	if (*s == '\0')
		return (0);
	is_palindrome(s + 1);
	if (*s != '\0' && *s != *ptr)
		return (0);
	else
		return (1);
}

