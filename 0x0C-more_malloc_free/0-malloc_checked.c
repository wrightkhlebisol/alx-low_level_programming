#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: size of malloc
 *
 * Return: NULL or Pointer
 */
void *malloc_checked(unsigned int b)
{
	void *newmem;

	if (b <= 0)
		exit(98);

	newmem = malloc(sizeof(unsigned int) * b);
	if (newmem == NULL)
		exit(98);

	return (newmem);
}
