#include <stdio.h>
#include "main.h"

/**
 * main - Prints all the argument it receives
 * @argc: The argument count
 * @argv: The array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
