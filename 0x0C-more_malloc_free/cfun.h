#ifndef CFUN_H
#define CFUN_H

#include <stdlib.h>

/**
 * * _strlen - returns the length of the string
 * * @str: string to check
 * *
 * * Return: int
 B
 **/

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * * _strcpy - copies a string pointed by @src
 * * include the terminating null byte(\0),
 * *  to the buffer pointed to by dest
 * * @dest: a buffer to copy to
 * * @src: source to copy from
 * * Return: A pointer
 **/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');


	return (dest);
}

/**
 *  * _memset - fills the memory with a constant byte
 *   * @s: pointer to mem area
 *    * @n: number of bytes
 *     * @b: constant value
 *      * Return: pointer to the memory area
 *       */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}

/**
 *  * _memcpy - copies memory area
 *   * @src: memory source
 *    * @dest: destination
 *     * @n: bytes
 *      * Return: destnation
 *       */

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
/**
 *  * _atoi - converts string to integer
 *   * @s: string to be converted
 *    * Return: integer
 *     */

int _atoi(const char *s)
{
	int symbol = 1;
	unsigned int n = 0;

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

/**
 *  * _puts - prints to stdout
 *   * @str: string to print
 *    *
 *     */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}

/**
 *  * print_number - prints an integer
 *   * @n: number to be printed using _putchar
 *    */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i == 0)
		_putchar('0');
	if (i / 10 > 0)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
#endif
