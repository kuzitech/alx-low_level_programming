#include <stdio.h>
/**
 * main - prints diff combinations of numbers.
 *
 * Return: 0
 */
int main(void)
{
	int pre;
	int num;
	int par;

	for (pre = '0'; pre <= '9'; pre++)
	{
		for (num = (pre + 1); num <= '9'; num++)
		{
			for (par = (num + 1); par <= '9'; par++)
			{
				putchar(pre);
				putchar(num);
				putchar(par);
				if (pre != '8' || num != '9' || par != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');


	return (0);
}
