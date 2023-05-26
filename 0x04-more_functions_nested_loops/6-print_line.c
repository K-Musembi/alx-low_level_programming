#include "main.h"

/**
 * print_line - draw straight line on terminal
 * @n: integer input
 *
 * Return: 0
 */
void print_line(int n)
{
	int count = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count < n)
		{
			_putchar('_');

			count++;
		}
	}
	_putchar('\n');
}
