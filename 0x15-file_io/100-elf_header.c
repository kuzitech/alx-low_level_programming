#include "main.h"
#include <stdio.h>

#define MAXSIZE 1204
#define SE STDERR_FILENO

/**
 * main - create the copy bash script
 * @ac: argument count
 * @av: arguments as strings
 * Return: 0
**/

int main(int ac, char *av[])
{
	mode_t mode;
	char buffer[MAXSIZE];
	int fd_i, fd_o, input_s, output_s;

	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	fd_o = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd_o == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
	fd_i = open(av[1], O_RDONLY);
	if (fd_i == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);

	do {
		input_s = read(fd_i, buffer, MAXSIZE);
		if (input_s == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (input_s > 0)
		{
			output_s = write(fd_o, buffer, (ssize_t) input_s);
			if (output_s == -1)
				dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	} while (input_s > 0);

	input_s = close(fd_i);
	if (input_s == -1)
		dprintf(SE, "Error: Can't close fd %d\n", fd_i), exit(100);
	output_s = close(fd_o);
	if (output_s == -1)
		dprintf(SE, "Error: Can't close fd %d\n", fd_o), exit(100);

	return (0);
}
