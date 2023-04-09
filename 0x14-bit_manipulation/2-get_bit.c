#include "main.h"

/**
 * get_bit - Retuns value of a bit at a given index
 * @index: index from 0 of the bit to get
 * @n: value of bit
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/*sizeof(unsigned long int * 8);*/

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	
	return ((n >> index) & 1);
}
