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

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			_putchar('0' + (i * j));

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
