#include <stdlib>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print the members of a dog structure instance
 * @d: pointer to the dog structure instance that needs to be printed
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age == NULL)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %s\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s", d->owner);
		}
	}
}
