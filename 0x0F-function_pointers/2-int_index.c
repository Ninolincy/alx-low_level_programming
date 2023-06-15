#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer
 * @size: size of array
 * @array: array to search in
 * @cmp: pointer to the comparing function
 * Return: index of the first element for which
 * the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
