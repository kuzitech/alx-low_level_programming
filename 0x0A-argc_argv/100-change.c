#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 * to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success 1 error
 */

int main(int argc, char *argv[])
{
	int used = 0;
	int cent = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	while (i > 0 && used <= 4)
	{
		if (i >= coins[cent])
		{
			i -= coins[cent];
			used++;
		}
		else
			cent++;
	}
	printf("%i\n", used);
	return (0);
}

