#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dogs
 * @d: pointer to dog_t
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	else
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
