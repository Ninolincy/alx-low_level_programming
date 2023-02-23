#include <stdio.h>

/**
 * main - List all the natural numbers below 10
 * that are multiples of 3 or 5, we get 3, 5, 6 and 9
 * Return: 0 (Success)
 */

int main(void)
{
	int i, b = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			b += i;
		}
		i++;
	}
	printf("%d\n", b);
	return (0);
}
