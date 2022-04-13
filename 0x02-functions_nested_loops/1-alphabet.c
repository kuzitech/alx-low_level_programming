#include "main.h"
/**
 * print_alphabet - using prototype
 * void print_alphabet(void);
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	_putchar(alpha);

	_putchar('\n');
}
