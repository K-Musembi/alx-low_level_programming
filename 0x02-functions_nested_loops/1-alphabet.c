#include "main.h"

/**
 * 1-alphabet - prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char counter = 'a';

	while (counter <= 'z')
	{
		_putchar(counter);
		counter++;
	}
	_putchar('\n');
}
