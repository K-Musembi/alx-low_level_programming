#include "main.h"

/**
* _sqrt_recursion - returns square root
* @n: input
*
* Return: square root
*/
int _sqrt_recursion(int n)
{
	int sqr;

	if (n < 0)
		return (-1);

	sqr = _sqrt_recursion(n - 1);
	if (sqr * sqr == n)
		return (sqr);
	else
		return (-1);
}
