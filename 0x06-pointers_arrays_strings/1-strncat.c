#include "main.h"

/**
 * _strncat - Concatenates n bytes from a string to another
 * @dest: Destination string
 * @src: Source string
 * @n: Bytes of str to concatenate
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
