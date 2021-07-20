#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strcopy - copy a string.
 * @dest: string of destine.
 * @src: string initial.
 * Return: dest pointer.
 */

char *_strcopy(char *dest, char *src)
{
	int x = 0;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: Member name of the new dog.
 * @age: Member age of the new dog.
 * @owner: Member pwner of the new dog.
 * Return: ptr pointer to memory.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int mmryname = 0, mmryowner = 0;
	dog_t *ptr;

	while (name[mmryname] != '\0')
	{
		mmryname++;
	}
	while (owner[mmryowner] != '\0')
	{
		mmryowner++;
	}
	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->name = malloc(sizeof(char) * (mmryname + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (mmryowner + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);

		return (NULL);
	}
	ptr->name = _strcopy(ptr->name, name);
	ptr->age = age;
	ptr->owner = _strcopy(ptr->owner, owner);

	return (ptr);
}
