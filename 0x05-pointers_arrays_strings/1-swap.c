#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Integer to swap
 * @b: Integer to swap
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
