#include "main.h"
/**
 * main - using prototype 
 * void print_alphabet(void);
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
		_putchar('\n');
	}
}
