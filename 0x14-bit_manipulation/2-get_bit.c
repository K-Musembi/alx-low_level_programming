#include "main.h"

/**
 * get_bit - return value at index
 * @n: input
 * @index: input
 *
 * Return: value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & m) != 0)
		return (1);
	else
		return (0);
}
