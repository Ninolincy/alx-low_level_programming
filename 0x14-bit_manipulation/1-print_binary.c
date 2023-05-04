#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to print binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int b;
	int x = 0;
	unsigned long int set;

	/*bits of unsigned int is 64 in most systems*/
	for (b = 63; b >= 0; b--)
	{
		set = n >> b;
		if (set & 1)
			x++;
		if (x)
			_putchar((set & 1) + '0');
	}
	if (x == 0)
		_putchar('0');
}

