#include "main.h"
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
	char password[16];
	char checker[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!$#@&0123456789";
	int i;

	srand((long)(time(NULL)));
	for (i = 0; i < 16; i++)
	{
		password = substr(checker, rand() % strlen(checker), 1);
	}

	printf("%s", password);

	return (0);
}
