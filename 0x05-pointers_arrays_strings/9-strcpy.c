#include "main.h"

/**
 * _strcpy - copy string
 * @dest: first input
 * @src: second input
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (*dest);
	_putchar('\n');

}
