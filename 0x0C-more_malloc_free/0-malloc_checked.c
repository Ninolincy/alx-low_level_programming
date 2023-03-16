#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * if malloc fails, the malloc_checked function should cause,
 * normal process termination with a status value of 98
 * @b: number of bytes to allocate
 * Return: Pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}

	return (s);
}
