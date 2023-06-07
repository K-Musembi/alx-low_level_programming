#include "main.h"

/**
* is_prime_number - checks for prime number
* @n: input
*
* Return: 1 if prime
*/
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	if (n % i == 0)
		return (0);
	if (n % i != 0)
		return (1);
	i++;
	return (is_prime_number(n) % i);
}
