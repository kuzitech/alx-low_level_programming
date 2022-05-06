#include "main.h"

/**
 * _strlen - returns the length of the string
 * @str: string to check
 *
 * Return: int
 */

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
