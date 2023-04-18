#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees dawgs
 * @d: dawgs
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			freee(d->owner);
		free(d);
	}
}
