#include "dog.h"

/**
 * init_dog - dog description
 * @d: dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * dogs description:
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
