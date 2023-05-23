#include "main.h"

/**
 * void print_alphabet_x10 - prints alphabet in lowercase 10x
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int outer = 0;
	char inner;

	while (outer <= 9)
	{
		inner = 'a';

		while (inner <= 'z')
		{
			_putchar(inner);
			inner++
		}
		_putchar('\n');
	}
	_putchar('\n');
}
