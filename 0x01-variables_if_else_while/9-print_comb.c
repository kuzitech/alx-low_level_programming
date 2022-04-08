#include <stdio.h>
/**
 * main - prints all posible combinations of single-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int base = '0';

	while (base <= '9')
	{
		putchar(base);
		if(base != '9')
		{
			putchar(',');
			putchar(' ');
		}
		base++;
	}
	putchar('\n');

	return (0);
}
