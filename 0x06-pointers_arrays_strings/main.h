#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * atoi - converts string to integer
 * @s: string to be converted
 * Return: integer
 **/

int _atoi(char *s)
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

#endif
