#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize the members of a dog structure instance
 * @d: pointer to the dog structure instance that needs to be initialized
 * @name: pointer to a char array that holds the name of the dog
 * @age: float value that represents the age of the dog
 * @owner: pointer to a char array that holds the name of the owner of the dog
 *
 * This function initializes the members of the dog structure instance that is
 * pointed to by `d` using the values of `name`, `age`, and `owner`.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		dog->name = name;
		dog->age = age;
		dog->owner = owner
	}
}
