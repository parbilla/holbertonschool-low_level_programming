#ifndef DOG
#define DOG

/**
 * struct dog - dog description
 * @name: name
 * @age: age
 * @owner: owner
 *
 * dogs description:
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}
my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
