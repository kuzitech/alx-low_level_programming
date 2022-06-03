#include "main.h"

/**
 * infinite_add - add 2 integers
 * @n1: integer 1
 * @n2: integer 2
 * @r: buffer
 * size_r: size of r
 * Return: char
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum, int1, int2;

	int1 = _atoi(n1);
	int2 = _atoi(n2);

	sum = int1 + int2;

	return (sum);

}
