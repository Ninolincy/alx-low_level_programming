#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int ones, tens, hunds;

	for (ones = '0'; ones <= '9'; ones++)
	{
		for (tens = '1'; tens <= '9'; tens++)
		{
			for (hunds = '2'; hunds <= '9'; hunds++)
				if (ones < tens && hunds > tens)
				{
					putchar(ones);
					putchar(tens);
					putchar(hunds);
					if (ones != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
		}
	}
	putchar('\n');
	return (0);
}
