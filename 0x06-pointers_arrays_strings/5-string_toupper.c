#include "main.h"

/**
* string_toupper - convert to uppercase
*@s: input pointer
*
* Return: s
*/
char *string_toupper(char *s)
{
	int i;
	int convert = 'a' - 'A';

	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
		{
			s[i] -= convert;
		}
		i++;
	}
	return (s);
}
