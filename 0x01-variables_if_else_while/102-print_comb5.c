#include <stdio.h>
/**
 * main - prints diff combinations of numbers.
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{  /**first loop for the first two combinations**/
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{ /**second loop for the last two combinations ending at 99**/
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (!(num1 == 98 && num2 == 99))
			{
				/*add the trailing comma and space*/
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
