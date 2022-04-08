#include <stdio.h>
/**
 * main - prints binary base10 using putchar
 *
 * Return: 0
 */
int main(void)
{
	int base = '0';

	while (base <= '9')
	{
		putchar(base);
		base++;
	}
	putchar('\n');

	return (0);
}
