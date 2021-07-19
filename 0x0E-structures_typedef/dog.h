#ifndef holberton
#define holberton

/**
 * struct dog - Estructure of data who contains data of a dog
 * @name: member name of the dog
 * @age: member age of the dog
 * @owner: member owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
