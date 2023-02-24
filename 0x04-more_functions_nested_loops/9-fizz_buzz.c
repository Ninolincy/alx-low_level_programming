#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
			else if (i % 5 == 0)
			{
				printf("Buzz");
			}
		else if (i % 3 == 0)
		{
			printf("fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
