#include "main.h"

/**
 * _strcpy - copies a string pointed by @src
 * include the terminating null byte(\0),
 *  to the buffer pointed to by dest
 * @dest: a buffer to copy to
 * @src: source to copy from
 * Return: A pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
