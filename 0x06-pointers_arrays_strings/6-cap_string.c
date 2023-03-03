#include "main.h"

/**
 * cap_string - Capitalizes words of a string
 * @s: String to be modified
 * Return: The resulting string
 */

char *cap_string(char *s)
{
	int a;
	int b;
	char spec[13] = {' ', ',', ';', '.', '!', '?', '"',
		'\n', '\t', '(', ')', '{', '}'};

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a == 0 && s[a] >= 'a' && s[a] <= 'z')
			s[a] -= 2;
		for (b = 0; b < 13; b++)
		{
			if (s[a] == spec[b])
					{
					if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
					{
					s[a + 1] -= 32;
					}
					}
					}
					}
					return (s);
					}
