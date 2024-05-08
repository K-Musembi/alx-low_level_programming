#include "search_algos.h"

/**
 * jump_search - search for value in an array
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t idx, back, i;

	if (array == NULL)
		return (-1);

	idx = 0;
	while (idx < size)
	{
		if (value <= array[idx])
		{
			back = idx - step;
			printf("Value found between indexes [%ld] and [%ld]\n", back, idx);
			for (i = back; i <= idx; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
		}
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		idx = idx + step;
	}
	idx = idx - step;
	printf("Value found between indexes [%ld] and [%ld]\n", idx, idx + step);
	printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	return (-1);
}
