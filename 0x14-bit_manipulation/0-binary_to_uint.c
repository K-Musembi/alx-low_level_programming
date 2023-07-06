#include "main.h"

/**
* binary_to_uint - convert binary to decimal
* @b: input
*
* Return: number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j = 0, sum = 0;
	unsigned int count = 0, mul;
	const char *ptr = b;

	if (ptr == NULL)
		return (0);

	count = 0;
	while (*ptr != '\0')
	{
		if (*ptr != '1' && *ptr != '0')
			return (0);
		count++;
		ptr++;
	}
	ptr--;

	for (i = 0; i < count; i++)
	{
		if (*ptr == '1')
		{
			mul = power(2, j);
			sum += mul;
			j += 1;
		}
		if (i != (count - 1))
			ptr--;
	}

	return (sum);
}
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
