#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Destination
 * @src: Source
 * @n: Bytes used
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; src[i] != '\0' && i < n;)
		i++;
	{
		dest[j + i] = src[i];
	}

	if (i < n)
	{
		dest[j] = '\0';
	}
	return (dest);
}
