#include <stdio.h>

/**
 * main - List all the natural numbers below 10
 * that are multiples of 3 or 5, we get 3, 5, 6 and 9
 * Return: 0 (Success)
 */

int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += 1;
			printf("%d ", i);
		}
	}
	putchar('\n');
	printf("%d\n", sum);
	return (0);
}
