#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_string - print strings
 * @list: arguments
 */
void print_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	else
	{
		printf("%s", str);
	}
}

/**
 * print_all - prints anything
 * @list: arguments
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, x = 0;
	int num;
	char single;
	float dec;

	va_start(list, format);

	while (format && format[i])
	{
		while (x < 4)
		{
			switch (format[i])
			{
				case 'i':
					num = va_arg(list, int);
					printf("%d", num);
					printf("%s", ", ");
					x++;
					break;
				case 's':
					print_string(list);
					printf("%s", ", ");
					x++;
					break;
				case 'f':
					dec = va_arg(list, double);
					printf("%f", dec);
					printf("%s", ", ");
					x++;
					break;
				case 'c':
					single = va_arg(list, int);
					printf("%c", single);
					printf("%s", ", ");
					x++;
					break;
			}
		}
		i++;
	}

	printf("\n");
	va_end(list);
}
