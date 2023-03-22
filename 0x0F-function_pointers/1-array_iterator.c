#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function given as a parameter on each element of an array
 * @array: Array
 * @size: Size of element to print
 * @action: Pointer to the function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
