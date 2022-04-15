#include "main.h"

/**
 * print_most_numbers - prints 0-9
 * follow by a new line
 * do not print 2 and 4
 * Return: num
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '4' && i != '2')
			_putchar(i);
	}
	_putchar('\n');
}
