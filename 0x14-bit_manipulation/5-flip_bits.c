#include "main.h"

/**
 * flip_bits - number of bits needed
 * @n: input
 * @m: input
 *
 * Return: number flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int res;

	res = n ^ m;

	while (res != 0)
	{
		num += res & 1;
		res >>= 1;
	}
	return (num);
}
