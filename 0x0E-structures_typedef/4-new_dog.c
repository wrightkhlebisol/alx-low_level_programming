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
	char *name_cp = name;
	char *owner_cp = owner;
	dog_t *new_d = malloc(sizeof(dog_t));

	if (new_d == NULL)
		return (NULL);
	new_d->name = name_cp;
	new_d->age = age;
	new_d->owner = owner_cp;

	return (new_d);
}
