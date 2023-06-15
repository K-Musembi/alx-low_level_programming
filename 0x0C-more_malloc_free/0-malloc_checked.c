#include <stdlib.h>

/**
* malloc_checked - allocate memory to malloc
* @b: input
*
* Return: nothing
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(*ptr) * b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
