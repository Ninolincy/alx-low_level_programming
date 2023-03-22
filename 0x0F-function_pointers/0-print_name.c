#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: String to add
 * @f: pointer to function
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
			}
