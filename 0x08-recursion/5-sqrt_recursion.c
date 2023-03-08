#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * _sqrt - Calculate the square root of n
 * @n: The number to calculate the square root of
 * Return: The square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - Calculate the square root of n
 * @n: The number to get the square root of
 * @i: Iterate number
 * Return: Natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
