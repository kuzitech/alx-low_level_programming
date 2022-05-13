#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse a string;
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = 0, c = 0;
	char r;

	i = strlen(s);

	for (c = i - 1; c >= i / 2; i--)
	{
		r = s[i];
		s[i] = s[(c - 1) - 1];
	       s[(c - i) - 1] = r;	
	}
}
