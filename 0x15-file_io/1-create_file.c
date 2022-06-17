#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file
 * @text_content: content
 * Return: 1 on success or -1 on failure
**/

int create_file(const char *filename, char *text_content)
{
	int t, fd, s = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		t = write(fd, text_content, s);
		if (t != s)
			return (-1);
	}

	close(fd);

	return (1);
}
