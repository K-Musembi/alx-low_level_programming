#include "main.h"

/**
* _strpbrk - searches string for matching bytes
* @s: first input
* @accept: second input
*
* Return: pointer or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
				return (&(s[j]));
		}
	}
	return (NULL);
}
