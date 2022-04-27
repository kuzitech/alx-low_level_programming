#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: segment
 * @accept: bytes
 * Return: number of bytes in segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int b = 0;
	int i = 0, x;

	while (s[i] != '\0')
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				b++;
				break;
			}
			if (accept[x] + 1 == '\0' && s[i] != accept[x])
				return (b);
		}
		i++;
	}

	return (b);
}

