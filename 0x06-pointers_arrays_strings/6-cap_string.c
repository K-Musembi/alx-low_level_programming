#include "main.h"

/**
* cap_string - capitalize words
* @s: input pointer
*
* Return: s
*/
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
		}
		else if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '.')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
			else
			{
				i++;
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] -= 32;
				}
			}
		}
	}
	return (s);
}
