#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned char *ptr;
	unsigned int num;

	num = 1;
	ptr = (unsigned char *) &num;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
