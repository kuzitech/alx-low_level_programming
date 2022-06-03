#include "main.h"

/**
 * cap_string - Capitalize a word
 * @str: line of strings to capitalize
 * Return: str
 */

char *cap_string(char *str)
{
	int i, x, j = 0;
	char sep[] = {',',';','.','!','?','"','(',')','{','}','\n','\t'};

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;

		if (i == 0)
			j = 1;
		else
		{
			for (x = 0; sep[x] != '\0'; x++)
			{
				if (str[i - 1] == sep[x])
				{
					j = 1;
					break;
				}
			}
		}
		if (j == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
	}
	return (str);
}
