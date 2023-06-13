#include <stdlib.h>

/**
* free_grid - free memory allocated to array
* @grid: first input
* @height: second input
*
* Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i;
	(void) height;

	for (i = 0; grid[i] != NULL; i++)
		free(grid[i]);
	free(grid);
}
