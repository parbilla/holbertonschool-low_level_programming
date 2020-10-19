#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - free structure
 * @d: structure
 *
 * Return: dogs description
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
