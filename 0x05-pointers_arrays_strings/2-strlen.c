#include "main.h"
#include <string.h>

/**
 * _strlen - Returns the length of a string
 * @s: String to get length
 * Return: length of string
 */

int _strlen(char *s)
{
	char length = 0;

	while (*s++)
		length++;
	return (length);
}
