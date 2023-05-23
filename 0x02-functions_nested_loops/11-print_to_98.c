#include "main.h"

/**
 * print_to_98 - prints to 98
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{

	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar('0' + n);

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n == 98)
		_putchar('0' + n);
	else
	{
		while (n >= 98)
		{
			_putchar('0' + n);

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}
