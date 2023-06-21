#include "3-calc.h"
#include <stddef.h>

/**
* get_op_func - select correct function
* @s: input
*
* Return: pointer
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i])
	{
		if (get_op_func(s))
			return (&(ops[i]));
	}
	return (NULL);
}
