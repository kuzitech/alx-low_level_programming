#include "main.h"
#include "cfun.h"

/**
 * _calloc - allocates memory for an array of nmemb
 * elements os size bytes
 * @nmemb: array
 * @size: size of it
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == NULL || size == NULL)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
