#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize function dog from dog.h
 * @d: Name of the structure
 * @name: Member name of the dog
 * @age: Member age of the dog
 * @owner: Member owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
