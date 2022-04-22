#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: integer
 */

int _atoi(char *s)
{
	int symbol = 1;
	int n = 0;

	do {
		if (*s == '-')
			symbol *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * symbol);
}
