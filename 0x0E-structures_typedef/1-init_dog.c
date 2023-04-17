#include "dog.h"

/**
* init_dog - Initialize dog struct
* @d: pointer to dog struct
* @name: dog name
* @age: dog age
* @owner: owner name
*
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
