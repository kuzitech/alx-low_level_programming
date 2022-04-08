#include <stdio.h>
/**
 * main - prints all posible combinations of double-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int pre;
	int num;

	for (pre = '0'; pre <= '9'; pre++)
	{
		for (num = (pre + 1); num <= '9'; num++)
		{
			putchar(pre);
			putchar(num);
			if (pre != '8' || num != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');


	return (0);
}
