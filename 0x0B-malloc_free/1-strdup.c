#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: string to duplicate
 * Return: Pointer to str (success) else NULL (fail)
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);
	while ((duplicate[i] = str[i]) != '\0')
		i++;

	return (duplicate);
}
