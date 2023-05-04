#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of binary 0 and 1
 * Return: converted number or 0 if there is one or more
 * chars in the string b that is not 0 or 1 or b ia NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	num = 0;
	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			num = num << 1;
		}
		else if (b[i] == '1')
		{
			num = (num << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
