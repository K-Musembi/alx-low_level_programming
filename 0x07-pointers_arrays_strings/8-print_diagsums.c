#include "main.h"

/**
* print_diagsums - prints sum of diagonals
* @a: first input
* @size: second input
*
* Return: 0
*/
void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
