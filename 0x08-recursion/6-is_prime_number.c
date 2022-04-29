#include "main.h"

/**
 * divide - checks division
 * @n: number
 * @d: divisor
 * Return: int
 */
int divide(int n, int d)
{
	if (n % d == 0)
		return (0);
	if (d == n / 2)
		return (1);
	return (divide(n, d + 1));
}

/**
 * is_prime_number - checks if number is prime
 * @n: number
 * Return: number is prime - 1
 *         nmber is not prime - 0
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (divide(n, div));
}
