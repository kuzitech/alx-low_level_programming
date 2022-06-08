#include "main.h"
#include "cfun.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory
 * @old_size: size in bytes of the old memory
 * @new_size: new size of the new memory
 * Return: ptr or null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;

	if (new_size == old_size)
		return (ptr);

	else if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);
		return (mem);
	}

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	else
	{
		mem = malloc(new_size);

		if (mem)
		{
			_memcpy(mem, ptr, old_size);
			free(ptr);
		}
		return (mem);
	}
	return (0);
}
