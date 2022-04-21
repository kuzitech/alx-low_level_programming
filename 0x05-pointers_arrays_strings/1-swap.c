#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @a: int 1
 * @b: int 2
 * Return: int
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
