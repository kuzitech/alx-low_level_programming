#include <stdio.h>

/**
 * swap_int - swaps the value of 2 integers
 * main - checks the code
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

int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
