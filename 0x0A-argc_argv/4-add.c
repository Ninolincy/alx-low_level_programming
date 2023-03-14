#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _atoi - Convert string to integer
 *
 * Description: Convert string to an integer
 * @s: pointer to string that should be converted into an integer
 * Return: Integer representation of @s
 *
 */
int _atoi(char *s)
{
        int c = 0;
        unsigned int ni = 0;
        int min = 1;
        int isi = 0;

        while (s[c])
        {
                if (s[c] == 45)
                {
                        min *= -1;
                }
                while (s[c] >= 48 && s[c] <= 57)
                {
                        isi = 1;
                        ni = (ni * 10) + (s[c] - '0');
                        c++;
                }
                if (isi == 1)
                {
                        break;
                }
                c++;
        }
        ni *= min;
        return (ni);
}

/**
 * main - Program that adds positive numbers,
 * if no number is passed,the program prints 0,
 * if one number contains a letter, print Error
 * @argc: The argument count
 * @argv: The array argument
 * _atoi: Converts a string to an integer
 * Return:
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			int s = _atoi(argv[i]);

			sum += s;
		}
	}
	printf("%d\n", sum);
	return (0);
}
