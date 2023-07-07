#include "main.h"

/**
* set_bit - set value of bit to 1
* @n: input
* @index: input
*
* Return: 1 0r -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;

	*n = *n | mask;

	return (1);
}
