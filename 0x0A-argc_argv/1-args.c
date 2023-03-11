#include <stdio.h>
#include "main.h"

/*
 * main - Print the number of arguments passed into it,
 * and the argv is not used
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
