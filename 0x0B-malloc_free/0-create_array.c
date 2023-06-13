#include <stdlib.h>

/**
* create_array - create array and initialize
* @size: first input
* @c: second input
*
* Return: pointer
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (ptr);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	ptr[i] = '\0';

	return (ptr);
}
