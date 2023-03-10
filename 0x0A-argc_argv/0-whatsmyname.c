#include <stdio.h>
#include "main.h"

/**
 * main - Prints its name followed by a new line
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 Success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
