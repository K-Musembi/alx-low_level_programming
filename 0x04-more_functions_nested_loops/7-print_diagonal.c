#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: integer input
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}

	_putchar('\n');
}
