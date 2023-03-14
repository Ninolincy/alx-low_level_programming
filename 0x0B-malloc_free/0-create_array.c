#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of char,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to assign
 *
 * Return: Pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
