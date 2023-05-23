#include "main.h"

/**
 * times_table - prints the 9-times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i = 0;
	int j;
	int result;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			result = i * j;
			if (result >= 10)
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			else
				_putchar('0' + result);

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
