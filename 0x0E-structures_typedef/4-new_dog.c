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

/**
 * new_dog - Initialize a new dog
 * @name: Member name of the dog
 * @age: Member age of the dog
 * @owner: Member owner of the dog
 * Return: A new dog, type of data
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *ptrmmry;

	ptrmmry = malloc(sizeof(dog_t));
	if (ptrmmry == NULL)
	{
		return (NULL);
	}
	else
	{
		init_dog(ptrmmry, name, age, owner);
		return (ptrmmry);
	}
}
