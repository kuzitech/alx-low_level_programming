#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: str
 */

char *leet(char *str)
{
	int i, x;
	char lwCase[] = "aeotl";
	char upCase[] = "AEOTL";
	char base[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; base[x] != '\0'; x++)
		{
			if (str[i] == upCase[x] || str[i] == lwCase[x])
				str[i] = base[x];
		}
	}

	return (str);
}
