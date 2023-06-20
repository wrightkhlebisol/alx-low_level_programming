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

	new_d->name = strdup(name);
	new_d->owner = strdup(owner);

	if (new_d->name == NULL || new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d->owner);
		free(new_d);
		return (NULL);
	}

	new_d->age = age;

	return (new_d);
}
