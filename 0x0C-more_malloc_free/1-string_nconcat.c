#include "main.h"
#include "cfun.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x;
	char *mem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n = n + _strlen(s1);

	mem = malloc(sizeof(char) * (n + 1));

	if (mem == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		mem[i] = s1[i];
	for (x = 0; s2[x] != '\0'; x++)
		mem[i] = s2[x];
	mem[i] = '\0';

	printf("%d", n);
	return (mem);
}
