#include "main.h"

/**
* power - power of number
* @base: input
* @pow: input
*
* Return: power
*/
int power(unsigned int base, unsigned int pow)
{
	unsigned int i, result;

	if (pow == 0)
		return (1);
	else if (pow == 1)
		result = base;
	else
	{
		result = base;
		for (i = 0; i < pow - 1; i++)
			result *= base;
	}
	return (result);
}
