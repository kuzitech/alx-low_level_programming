#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int x, i;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (x = size - i; x > 0; x--)
				_putchar(' ');

			for (x = 0; x < i; x++)
				_putchar('#');

			if (i == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
