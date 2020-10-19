#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - array of chars
 * @str: string
 *
 * Return: always
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, j;

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != 0; i++)
	{
	}

	new_str = malloc((i + 1) * sizeof(char));

	if (new_str == 0)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		new_str[j] = str[j];
	}
	return (new_str);
}

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
	char *cpy_name, *cpy_owner;

	if (name == NULL || owner == NULL)
	{
		return (0);
	}

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	cpy_name = _strdup(name);
	if (cpy_name == NULL)
	{
		free(dog);
		return (0);
	}

	cpy_owner = _strdup(owner);
	if (cpy_owner == NULL)
	{
		free(dog);
		free(cpy_name);
		return (NULL);
	}

	dog->name = cpy_name;
	dog->age = age;
	dog->owner = cpy_owner;
	return (dog);
}
