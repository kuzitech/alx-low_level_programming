#include "main.h"
#include "cfun.h"

/**
 * main - multiply two numbers
 * @argc: int
 * @argv: list
 * Return: 0
 **/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_number(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
