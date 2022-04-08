#include <stdio.h>
/**
 * main - prints small and capital letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ap = 'a';
	char cap = 'A';

	while (ap <= 'z')
	{
		putchar(ap);
		ap++;
	}

	while (cap <= 'Z')
	{
		putchar(cap);
		cap++;
	}
	putchar('\n');

	return (0);
}
