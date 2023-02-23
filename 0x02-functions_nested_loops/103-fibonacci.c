#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued terms
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;
	long int j = 1;
	long int k = 2;
	long int new_value;
	long int sum = 2;

	while (new_value < 4000000)
	{
		new_value = j + k;

		if (new_value % 2 == 0)
		{
			sum += new_value;
		}
		j = k;
		k = new_value;
	}
	printf("%li", sum);
	return (0);
}
