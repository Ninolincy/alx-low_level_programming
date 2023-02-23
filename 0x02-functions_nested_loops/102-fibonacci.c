#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 * Return: 0 (Success)
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int next_value;
	int count;

	printf("%li, %li, ", a, b);

	for (count = 0; count < 48; count++)
	{
		next_value = a + b;
		printf("%li", next_value);
		a = b;
		b = next_value;

		if (count <= 46)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
