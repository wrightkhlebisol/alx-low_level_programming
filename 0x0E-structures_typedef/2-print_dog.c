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
	if (d != NULL)
	{
		printf("Name: ");
		d->name == 0 ? printf("(nil)\n"): printf("%s\n", d->name);
		printf("Age: ");
		d->age == 0 ? printf("(nil)\n"): printf("%.1f\n", d->age);
		printf("Owner: ");
		d->owner == 0 ? printf("(nil)\n"): printf("%s\n", d->owner);
	}
}
