#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * * which contains a copy of the string given as a parameter.
 * * @str: string
 * * Return: 0
 **/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *mem;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	mem = malloc(size * sizeof(*str) + 1);

	if (mem == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			mem[i] = str[i];
	}
	return (mem);
}
