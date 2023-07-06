#include "main.h"

/**
* print_binary - convert to binary
* @n: input
*
* Return: 0
*/

void print_binary(unsigned long int n)
{
	unsigned int mask = 0x8000;

	while (mask != 0)
	{
		if ((n & mask) == 0)
			_putchar ('0' + 0);
		else
			_putchar('0' + 1);
		mask = mask >> 1;
	}
}
