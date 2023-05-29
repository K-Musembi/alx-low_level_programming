#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: first input
 * @b: second input
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
	_putchar('\n');
}
