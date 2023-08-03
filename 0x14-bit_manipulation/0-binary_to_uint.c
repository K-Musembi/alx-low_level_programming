#include "main.h"

/**
 * binary_to_uint - convert binary number
 * @b: input
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int convert;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		convert = *b - '0';
		if (convert != 0 && convert != 1)
			return (0);

		num = (num << 1) | convert;
		b++;
	}
	return (num);
}
