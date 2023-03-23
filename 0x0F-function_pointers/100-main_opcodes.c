#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: Argument count
 * @argv: Argument value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	int (*func)(int, char **) = main;
	unsigned char ops;
	int j = 0;

	for (j = 0; j < i; j++)
	{
		{
		ops = *(unsigned char *) func;
		printf("%.2x", ops);
		}
	if (i == j - 1)
	{
		continue;
	}
	else
	{
		printf(" ");
	}
	func++;
	}
	printf("\n");
}

