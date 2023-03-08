#include "main.h"

int check_prime(int n, int i);
/**
 * is_prime_number - Returns 1 if the input integer is a prime number
 * Otherwise, returns 0
 * @n: The number to be checked
 * Return: 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - Check if the number is prime
 * @n: Number to be checked
 * @i: Iteration times
 * Return: 1 if prime and 0 if not
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
