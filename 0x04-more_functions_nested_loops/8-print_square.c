#include "main.h"

/**
 * print_square - Prints a square
 * @size: The size of square to be printed
 * Return:
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}

