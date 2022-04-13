#include "main.h"

/**
 * print_times_table - prints a times table
 * @n: the multiplier
 ***/
void print_times_table(int n)
{
	int num, x, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			/**print 0s for the first row**/
			_putchar('0');
			for (x = 1; x <= n; x++)
			{ /**multiplier & n: desired input**/
				_putchar(',');
				_putchar(' ');

				prod = num * x; /**products of nmbers**/

				/**remove comma for 99 and 9**/
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod /100) + '0');
					_putchar((prod / 10) % 10 + '0');
				}
				else if (prod >= 10 && prod <= 99)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
