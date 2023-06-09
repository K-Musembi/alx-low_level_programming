#include "function_pointers.h"

/**
* int_index - search for an integer
* @array: first input
* @size: second input
* @cmp: third input
*
* Return: integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
