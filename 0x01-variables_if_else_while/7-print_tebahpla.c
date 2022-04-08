#include <stdio.h>
/**
 * main - prints reversed small letters
 *
 * Return: 0
 */
int main(void)
{
	char ap = 'z';

	while (ap >= 'a')
	{
		putchar(ap);
		ap--;
	}
	putchar('\n');

	return (0);
}
