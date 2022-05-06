#include "main.h"
#include "cfun.h"

/**
 * *argstostr - concat all the arguments
 * @ac: argument count
 * @av: argument vector
 * Return: NULL if @ac=0 | av = null
 * pointer or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, strlen = 0, c = 0, parts = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		strlen += _strlen(av[i]);

	str = malloc(sizeof(char) * strlen + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (c = 0; av[i][c] != '\0'; c++, parts++)
			str[parts] = av[i][c];
		str[parts] = '\n';
		parts++;
	}
	str[parts] = '\0';

	return (str);
}
