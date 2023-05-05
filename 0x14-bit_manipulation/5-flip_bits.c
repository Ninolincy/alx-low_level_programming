#include "main.h"

/**
 * flip_bits - bits needed to flip to get from one number to another
 * @n: First bit
 * @m: Second bit
 * Return: integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int power = n ^ m;
	unsigned long int x = 0;

	while (power != 0)
	{
		x = x + (power & 1);
		power = power >> 1;
	}
	return (x);
}
