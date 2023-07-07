#include "main.h"

/**
* get_bit - return value of a bit
* @n: input
* @index: input
*
* Return: value, or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & mask) != 0)
		return (1);
	else
		return (0);
}
