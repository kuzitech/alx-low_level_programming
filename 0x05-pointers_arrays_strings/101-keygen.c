#include "mine.h"
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generates random passwords
 * Return: 0
 */

int main(void)
{
	char password[90];
	char checker[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!$#@&0123456789";
	int i;

	srand((double)(time(NULL)));
	for (i = 0; i < 18; i++)
	{
		password[i] = checker[rand() % strlen(checker)];
	}

	printf("%s\n", password);

	return (0);
}
