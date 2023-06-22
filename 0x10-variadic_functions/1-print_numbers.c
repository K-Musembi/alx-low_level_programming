#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
* print_numbers - print numbers
* @separator: input
* @n: input
*
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, value;
	va_list arr;

	va_start(arr, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(arr, int);
		printf("%d", value);
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(arr);
	printf("\n");
}
