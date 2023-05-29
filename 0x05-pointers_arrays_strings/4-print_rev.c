#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: pointer input
 *
 * Return: 0
 */
void print_rev(char *s)
{
	char *finish = s;

	while (*finish != '\0')
	{
		finish++;
	}

	finish--;
	while (finish >= s)
	{
		_putchar(*finish);
		finish--;
	}
	_putchar('\n');
}
