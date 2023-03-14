#include "main.h"
#include <string.h>
#include <stdlib.h>
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
 * main - Multiplies two numbers
 * @argc: The argument count
 * @argv: The array of argument
 * @Result: Result of the multiplication
 * @_atoi: Convert a character to an integer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
			
	num2 = _atoi(argv[2]);
			
	result = (num1 * num2);
	
	printf("%d\n", result);
	return (0);
}
