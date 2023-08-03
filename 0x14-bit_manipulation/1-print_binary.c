#include "main.h"

/**
 * print_binary - print binary of number
 * @n: input
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int num;
	int i, flag = 0;
	unsigned long int mask;

	num = sizeof(unsigned long int) * 8;
	for (i = num - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		if ((n & mask) != 0)
		{
			_putchar(1 + '0');
			flag = 1;
		}
		else
		{
			if (flag)
				_putchar(0 + '0');
		}
	}
	if (flag == 0)
		_putchar(0 + '0');
}
