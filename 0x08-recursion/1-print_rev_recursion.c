#include "main.h"

/**
* _print_rev_recursion - prints string in reverse
* @s: pointer input
*
*
* Return: 0
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	if (*s != '\0')
		_putchar(*s);
}
