#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>

int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
size_t _strlen(const char *str);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char* substr(const char *s, int m, int n)
{
	int len = n - m;
	char *dest = (char*)malloc(sizeof(char) * (len + 1));
	strncpy(dest, (s + m), len);
	return dest;
}

#endif
