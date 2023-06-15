#include <stdlib.h>

/**
* array_range - create an array of integers
* @min: first input
* @max: second input
*
* Return: pointer
*/
int *array_range(int min, int max)
{
	int i, j, size = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;

	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
		return (NULL);

	j = 0;
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		if (i != max)
			j++;
	}
	return (ptr);
}
