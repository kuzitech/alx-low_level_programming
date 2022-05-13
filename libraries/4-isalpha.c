#include "main.h"

/**
 * _isalpha - checks for char that
 * is alphabet
 * @c: param for operations
 * Return: 1 if +pos, 0 if -neg
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
