#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: memory source
 * @dest: destination
 * @n: bytes
 * Return: destnation
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}

	return (dest);
}
