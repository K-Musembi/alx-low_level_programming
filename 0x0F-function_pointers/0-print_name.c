#include "function_pointers.h"

/**
* print_name - print a name
* @name: first input
* @f: second input
*
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
