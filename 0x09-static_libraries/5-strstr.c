#include "main.h"

/**
* _strstr - locates substring
* @haystack: first input
* @needle: second input
*
* Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *NULL;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
			return (&(haystack[i]));
	}
	return (NULL);
}
