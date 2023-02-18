#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int c, d;

	for (c = 0; c <= 98; c++)
	{
		for (d = c + 1; d <= 99;)
		{
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
			putchar(' ');
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');
					if (c == 98 && d == 99)
					putchar(',');
					putchar(' ');
		}
	}
					putchar('\n');
					return (0);
}

