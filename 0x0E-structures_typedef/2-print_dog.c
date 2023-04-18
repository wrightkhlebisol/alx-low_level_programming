#include <stdio.h>
#include "dog.h"

/**
* print_dog - Print Dog struct
* @d: dog struct
*
* Return: void
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
}
