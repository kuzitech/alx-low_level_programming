#include <stdio.h>
/**
 * main - prints small letters except q and e
 *
 * Return: 0
 */
int main(void)
{
	char ap = 'a';

	while (ap <= 'z')
	{
		if ((ap != 'q') && (ap != 'e'))
		{
			putchar(ap);
		}
		ap++;
	}
	putchar('\n');

	return (0);
}
