#include "main.h"
#include "cfun.h"

/**
 * is_palindrome - checks stings 
 * direct and reverse length
 * @s: string
 * Return: int
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen(s);

	if(!(*s))
		return (1);
	return (check_palindrome(s, len, i));
}
