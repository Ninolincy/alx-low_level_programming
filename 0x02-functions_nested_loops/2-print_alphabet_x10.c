#include "main.h"

/**
 * main - print_alphabet_x10
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter;
	int num = 0;

	while (num <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter);
	}
	_putchar('\n');
	num++;
	}
}
