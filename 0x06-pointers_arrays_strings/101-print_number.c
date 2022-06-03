#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to be printed using _putchar
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i == 0)
		_putchar('0');
	if (i / 10 > 0)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
