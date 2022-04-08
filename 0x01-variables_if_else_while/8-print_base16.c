#include <stdio.h>
/**
 * main - prints binary base10
 *
 * Return: 0
 */
int main(void)
{
	int base = '0';
	char hex = 'a';

	while (base <= '9')
	{
		putchar(base);
		base++;
	}
	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');

	return (0);
}
