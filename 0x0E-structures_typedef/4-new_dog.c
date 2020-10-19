#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - dog description
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dogs description
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
	free(dog);
}
