#include "dog.h"
/**
 * init_dog - initialize variable of type struct dog
 * @d: pointer to structure
 * @name: dog name string
 * @age: dog age
 * @owner: dog's owner string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
