#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char p;

	while (s[i++])
		len++;

	for(i = len - 1; i >= len / 2; i--)
	{
		p = s[i];
		s[i] = s[(len - i) - 1];
		s[(len - i) - 1] = p;
	}
}
