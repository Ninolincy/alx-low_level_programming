#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program to print the last digit of the number
 * Return: 0 (Success)
 *
 */

int main(void)

{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10
		if (lastd > 5)
		{
			printf("last digit of %d is %d is greater than 5\n", n, lastd);
		}
		else if (lastd == 0)
		{
			printf("last digit of %d is %d is 0\n", n, lastd);
		}
		else if (lastd < 6 && lastd != 1)
		{
			printf("last digit of %d is %d is less than 6 and not 0\n", n lastd)"
		}
	return (0);
}
