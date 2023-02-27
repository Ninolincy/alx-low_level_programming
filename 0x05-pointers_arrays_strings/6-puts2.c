#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * starting with the first character
 * @str: String to be modified
 * Return: void
 */

void puts2(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	for (a = 0; a < b; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
