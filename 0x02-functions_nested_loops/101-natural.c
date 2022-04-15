#include <stdio.h>

/**
 * main - display all natural numbers
 * < 1024 that are x of 3 or 5.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
