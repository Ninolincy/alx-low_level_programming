#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to copy
 * Return: Pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
