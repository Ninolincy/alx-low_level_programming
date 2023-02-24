#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Number of diagonal lines printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int y;
	int x;

	if (n <= 0)
		_putchar('\n');
	else
		for (y = 0; y < n; y++)
		{
			for (x = 0; x < n; x++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
}
