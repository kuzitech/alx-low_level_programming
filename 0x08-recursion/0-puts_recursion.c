#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	char c = *s;

	if (*s)
	{
		_putchar(c);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
