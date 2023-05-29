#include "main.h"

/**
 * puts_half - print half of a string
 * @str: pointer input
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= len;

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}
	str += n;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
