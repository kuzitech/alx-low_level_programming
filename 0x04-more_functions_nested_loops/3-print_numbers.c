#include "main.h"

/**
 * print_numbers - prints number 0 - 9
 * using _putchar
 * Return: 0
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');
}
