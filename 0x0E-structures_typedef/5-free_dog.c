#include "dog.h"
#include <stdlib.h>
#include "main.h"
/**
* free_dog - free the memory of a dog struct
* @d: pointer to dog
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
