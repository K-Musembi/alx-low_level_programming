#include "search_algos.h"

/**
 * binary_search - search array for value
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, idx, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);


	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (idx = low; idx <= high; idx++)
		{
			printf("%d", array[idx]);
			if (idx != high)
				printf(", ");
		}
		printf("\n");

		if (value == array[mid])
			return (mid);
		if (low == high)
			break;

		if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
