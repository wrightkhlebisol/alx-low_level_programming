#include "dog.h"
/**
 * free_dog - Frees dog
 * @d: dog struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
