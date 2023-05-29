#include "main.h"

/**
 * rev_string - reverses string
 * @s: pointer input
 *
 * Return: 0
 */
void rev_string(char *s)
{
	char *begin = s;
	char *finish = s;
	char temp;

	while (*finish != '\0')
	{
		finish++;
	}
	finish--;

	while (begin < finish)
	{
		temp = *begin;
		*begin = *finish;
		*finish = temp;

		begin++;
		finish--;
	}
	_putchar('\n');
}
