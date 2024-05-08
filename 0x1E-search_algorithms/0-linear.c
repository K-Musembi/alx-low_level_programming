#include "search_algos.h"

/**
 * linear_search - search for value in array of integers
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;
	int item;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		if (value == array[idx])
		{
			printf("Value checked array[%ld] = [%d]\n", idx, value);
			return (idx);
		}
		item = array[idx];
		printf("Value checked array[%ld] = [%d]\n", idx, item);
	}
	return (-1);
}
