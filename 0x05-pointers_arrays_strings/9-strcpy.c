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
	int i = -1;

<<<<<<< HEAD
	do {
=======
	while (src[i] != '\0')
	{
		dest[i] = src[i];
>>>>>>> 1ab90b30750211e79033e3e99e3c9b5bc03c793d
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');


	return (dest);
}
