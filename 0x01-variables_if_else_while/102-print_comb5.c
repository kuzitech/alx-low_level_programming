#include <stdio.h>
/**
 * main - prints diff combinations of numbers.
 *
 * Return: 0
 */
int main(void)
{
	int par;
	int par2;
	int pre;
	int num;

	for (par = '0'; par <= '9'; par++)
	{
		for (par2 = '0'; par2 <= '9'; par2++)
		{
			for (pre = '0'; pre <= '9'; pre++)
			{
				for (num = (pre + 1); num <= '9'; num++)
				{
					putchar(par);
					putchar(par2);
					putchar(' ');
					putchar(pre);
					putchar(num);
					if (!((par == '9' && par2 == '8') && (pre == '9' || num == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');


	return (0);
}
