#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase followed by a new line
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
