#include "function_pointers.h"
#include <stddef.h>

/**
* array_iterator - execute function passed as parameter
* @array: first input
* @size: second input
* @action: third input
*
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
