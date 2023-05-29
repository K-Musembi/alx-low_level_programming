#include "main.h"

/**
 * puts2 - prints every other character
 * @str: pointer input
 *
 * Return: 0
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
