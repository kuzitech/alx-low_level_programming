#include "main.h"

/**
 * print_diagonal - draws a diagonal line using the \ char
 * @n: number of times to draw
 */

void print_diagonal(int n)
{
	int len, x;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (x = 0; x < len; x++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
