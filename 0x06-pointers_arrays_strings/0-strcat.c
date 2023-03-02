#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination
 * @src: Source
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int start;
	int end = 0;

	while (dest[end] != '\0')
	{
		end++;
	}
	for (start = 0; src[start] != '\0'; start++)
	{
		dest[end + start] = src[start];
	}
	return (dest);
}
