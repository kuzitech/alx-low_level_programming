#include "main.h"

/**
 * rot13 - rotates a character to its equivalent by 13places
 * take a as 0 and n as 13 either forward or backwards
 * @str: string for rotation
 * Return: str
 */

char *rot13(char *str)
{
	int i, x;
	char base[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; rot[x] != '\0'; x++)
		{
			if (str[i] == base[x])
			{
				str[i] = rot[x];
				break;
			}
		}
	}
	return (str);
}
