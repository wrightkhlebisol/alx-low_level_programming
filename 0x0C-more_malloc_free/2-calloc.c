#include "main.h"
/**
 * _calloc - Allocates memory for an array
 * @nmemb: number of members
 * @size: size of array
 *
 * Return: Pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *callocpointer;
	unsigned int i = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	callocpointer = malloc(nmemb * size);

	if (callocpointer == NULL)
		return (NULL);

	while (i < nmemb)
	{
		callocpointer[i] = 0;
		i++;
	}

	return (callocpointer);
}
