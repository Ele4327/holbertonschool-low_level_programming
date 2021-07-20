#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

int lenpntr(char *data);
void flldt(char *data_src, char *data_dest);

/**
 * init_dog - Initialize function dog from dog.h
 * @d: Name of the structure
 * @name: Member name of the dog
 * @age: Member age of the dog
 * @owner: Member owner of the dog
 * Return: Value of initialice dog
 */

int init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (name)
	{
		int x;

		x = lenpntr(name);
		d->name = malloc(sizeof(char) * x);

		if (d->name == NULL)
		{
			return (0);
		}

		flldt(name, d->name);
		(d->name)[x] = '\0';
	}

	if (owner)
	{
		int x;

		x = lenpntr(owner);
		d->owner = malloc(sizeof(char) * x);

		if (d->owner == NULL)
		{
			free(d->name);
			return (0);
		}

		flldt(owner, d->owner);
		(d->owner)[x] = '\0';
	}

	d->age = age;
	return (1);
}

/**
 * new_dog - Copy of a new dog
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
		int status;

		status = init_dog(ptrmmry, name, age, owner);

		if (status == 0)
		{
			free(ptrmmry);
			ptrmmry = NULL;
		}

		return (ptrmmry);
	}
}

/**
 * lenpntr - Lenght of a member of the structure
 * @data: Member of the dog
 * Return: Lenght of a member data
 */

int lenpntr(char *data)
{
	int cntdr = 0;

	while (*data != '\0')
	{
		cntdr++;
		data++;
	}
	return (cntdr);
}

/**
 * flldt - Lenght of a member of the structure
 * @data_src: Data Source
 * @data_dest: Data Destiny
 * Return: Always 0
 */

void flldt(char *data_src, char *data_dest)
{
	while (*data_src != '\0')
	{
		*data_dest++ = *data_src++;
	}
}
