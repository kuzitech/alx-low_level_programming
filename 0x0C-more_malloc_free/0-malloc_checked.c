#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: value to be allocated
 * Return: 0 or 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *mtoa = malloc(b);

	if (mtoa == NULL)
		exit(98);

	return (mtoa);
}
