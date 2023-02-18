#include <stdio.h>

/**
 * main - A program that prints the lowercase alphabet in reverse
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
