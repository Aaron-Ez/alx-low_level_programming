#include "function_pointers.h"

/**
 * print_name - prints the name provided
 * @name: takes name arg
 * @f: void fun
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
