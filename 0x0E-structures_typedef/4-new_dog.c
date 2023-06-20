#include "dog.h"
/**
 * new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: struct dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d = malloc(sizeof(dog_t));

	if (new_d == NULL)
		return (NULL);
	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;

	return (new_d);
}
