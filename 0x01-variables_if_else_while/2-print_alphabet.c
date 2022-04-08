#include <stdio.h>
/**
 * main - prints small letters
 *
 * Return: 0
 */
int main(void)
{
	char ap = 'a';

	while (ap <= 'z')
	{
		putchar(ap);
		ap++;
	}
	putchar('\n');

	return (0);
}
