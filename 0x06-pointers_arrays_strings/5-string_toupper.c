#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string
 * to uppercase
 * @s: String to be modified
 * Return: The resulting string
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;
	}

	return (s);
}

