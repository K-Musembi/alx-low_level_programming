#include "main.h"

/**
 * _abs - compute absolute value
 *@num: the input number
 *
 * Return: num
 */
int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
	_putchar('\n');
}
