#include <stdlib.h>

/**
* alloc_grid - allocate memory to an array
* @width: first input
* @height: second input
*
* Return: pointer
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
		ptr[i] = (int *)malloc(height * sizeof(int));
	if  (ptr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
