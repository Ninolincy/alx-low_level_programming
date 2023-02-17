#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that prints the lowercase alphabet in reverse
 * Return: 0 (Success)
 *
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low--)
		putchar(low);
	putchar('\n');
	return (0);
}
