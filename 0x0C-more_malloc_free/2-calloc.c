#include <stdlib.h>

/**
* _calloc - allocate memory for array and initialize
* @nmemb: first input
* @size: second input
*
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(size) * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
