#include "dog.h"
#include "cfun.h"
#include <stdlib.h>

char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 ** new_dog - Creates a new dog.
 ** @name: The name.
 ** @age: The age.
 ** @owner: owner of the dog.
 **
 ** Return: struct dog.
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *wof;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	wof = malloc(sizeof(dog_t));
	if (wof == NULL)
		return (NULL);

	wof->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (wof->name == NULL)
	{
		free(wof);
		return (NULL);
	}

	wof->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (wof->owner == NULL)
	{
		free(wof->name);
		free(wof);
		return (NULL);
	}

	wof->name = _strcpy(wof->name, name);
	wof->age = age;
	wof->owner = _strcpy(wof->owner, owner);

	return (wof);
}
