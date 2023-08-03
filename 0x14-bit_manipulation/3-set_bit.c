#include "main.h"

/**
 * set_bit - set value of bit
 * @n: input
 * @index: input
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	m = 1UL << index;

	*n = *n | m;

	return (1);
}
