#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to separate the output
 * @n: number of items passed
 * @...: array of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *part;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		part = va_arg(list, char *);

		if (part == NULL)
			printf("(nil)");
		else
			printf("%s", part);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);
}
