#include <stdlib.h>

/**
* _strdup - copy a string
* @str: string input
*
* Return: pointer
*/
char *_strdup(char *str)
{
	int i, length;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		length++;
	length++;

	ptr = malloc(length * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < str[i]; i++)
		ptr[i] = str[i];

	ptr[i] = '\0';
	return (ptr);
}
