#include <stdio.h>
#include "main.h"

/**
 * print_array - print array elements
 * @a: first input
 * @n: second input
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);
		if (i != (n - 1))
		{
			printf(", ");
		}
		a++;
	}
	printf("\n");

}
