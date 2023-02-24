#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of triangle
 * Return: void
 */

void print_triangle(int size)

{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
					_putchar('0');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
