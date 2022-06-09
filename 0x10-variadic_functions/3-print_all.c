#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: arguments
 */

void print_all(const char * const format, ...)
{
	va_list list;
	char *sep = "", *str;
	int i = 0;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 'c':
					printf("%s", sep);
					printf("%c", va_arg(list, int));
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
