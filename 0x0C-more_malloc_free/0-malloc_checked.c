#include <stdlib.h>

/**
* malloc_checked - Allocates memory and exits on error
* @b: malloc size
*
* Return: void
*/

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
	{
		exit(98);
	}
	return (t);
}
