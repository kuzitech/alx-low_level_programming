#include <stdio.h>
/**
 * main - prints binary base10
 *
 * Return: 0
 */
int main(void)
{
	int base = 0;

	while (base <= 9)
	{
		printf("%d", base);
		base++;
	}
	putchar('\n');

	return (0);
}
