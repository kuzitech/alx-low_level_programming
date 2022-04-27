#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2 diagonals of a square
 * @a: sets of int
 * @size: size of the sets
 */

void print_diagsums(int *a, int size)
{
	int i, xsum = 0, jsum = 0;

	for (i = 0; i < size; i++)
	{
		xsum += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		jsum += a[i];
		a -= size;
	}
	printf("%d, %d\n", xsum, jsum);
}	
