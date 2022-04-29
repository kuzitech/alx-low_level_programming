#include "main.h"

/**
 * getSquared - finds the square
 * @n: number
 * @x: root
 * Return: number
 */

int getSquared(int n, int x)
{
	if ((x * x) == n)
		return (x);
	if (x == n / 2)
		return (-1);
	return (getSquared(n, x + 1));
}

/**
 * _sqrt_recursion - calc square root of a number
 * @n: number
 * Return: number
 *
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (getSquared(n, root));
}
