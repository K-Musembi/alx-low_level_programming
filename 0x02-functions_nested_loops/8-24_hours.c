#include "main.h"

/**
 * jack_bauer - prints every minute of day
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hours = 24;
	int minutes = 60;
	int tens_h;
	int tens_m;
	int ones_h;
	int ones_m;
	int i = 0;
	int j = 0;

	while (i < hours)
	{

		if (i < 10)
			_putchar('0');

		tens_h = i / 10;
		ones_h = i % 10;

		_putchar('0' + tens_h);
		_putchar('0' + ones_h);
		_putchar(':');

		while (j < minutes)
		{
			if (j < 10)
				_putchar('0');

			tens_m = j / 10;
			ones_m = j % 10;

			_putchar('0' + tens_m);
			_putchar('0' + ones_m);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
