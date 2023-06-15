#include <stdlib.h>

/**
* string_nconcat - concatenate two strings
* @s1: first input
* @s2: second input
* @n: third input
*
* Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, total;
	unsigned int len1 = 0, len2 = 0;
	char *ptr;

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	total = len1 + len2 + 1;
	ptr = malloc(sizeof(*ptr) * total);
	if (ptr == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	j = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[j] = s1[i];
		j++;
	}
	if (n >= len2)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			ptr[j] = s2[i];
			j++;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			ptr[j] = s2[i];
			j++;
		}
	}
	ptr[j] = '\0';
	return (ptr);
}
