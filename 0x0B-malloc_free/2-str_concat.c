#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
*
* Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, length = 0;
	char *ptr;

	for (i = 0; s1[i]; i++)
		length++;
	for (i = 0; s2[i]; i++)
		length++;
	ptr = malloc(length * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
		ptr = '\0';
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	i = 0;
	while (ptr[i])
		i++;
	j = 0;
	while (s2[j])
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
