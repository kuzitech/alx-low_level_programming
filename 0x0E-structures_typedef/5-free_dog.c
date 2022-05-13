#include "dog.h"
#include <stdlib.h>

/**
 ** free_dog - Let the dogs out.
 ** @d: The dog.
 **/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
