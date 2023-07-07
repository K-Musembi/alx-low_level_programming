#include "main.h"

/**
* flip_bits - number of bits to flip
* @n: input
* @m: input
*
* Return: number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int num = 0;

	result = n ^ m;

	while (result != 0)
	{
		num += result & 1;
		result = result >> 1;
	}

	return (num);
}
