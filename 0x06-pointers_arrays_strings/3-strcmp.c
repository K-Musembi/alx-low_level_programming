#include "main.h"

/**
* _strcmp - compares two strings
* @s1: string one
* @s2: string two
*
* Return: 0 if equal; else positive or negative integer
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int len1;
	int len2;

	for (i = 0; s1[i] != '\0'; i++)
	{
		++len1;
	}
	for (j = 0; s2[i] != '\0'; j++)
	{
		++len2;
	}

	if (len1 < len2)
	{
		return (-15);
	}
	else if (len1 > len2)
	{
		return (15);
	}
	else
		return (0);
}
