#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
* print_strings - print strings
* @separator: input
* @n: input
*
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list arr;

	va_start(arr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arr, char*);
		if (str == NULL)
			printf("nil");
		printf("%s", str);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(arr);
	printf("\n");
}
