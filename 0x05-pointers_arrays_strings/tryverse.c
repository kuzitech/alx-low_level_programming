#include "main.h"
#include <string.h>

/**
 * print_rev - prints reversed string
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int i = 0;

	i = strlen(s);

	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}
