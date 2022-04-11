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
			for (pre = par; pre <= '9'; pre++)
			{
				for (num = par2 + 1 ; num <= '9'; num++)
				{		
					putchar(par);
					putchar(par2);
					putchar(' ');
					putchar(pre);
					putchar(num);
					
					if (!((par == '9' && par2 == '8') && (pre == '9' && num == '9')))
					{
						/**stop adding space and comma at 98 99**/
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
