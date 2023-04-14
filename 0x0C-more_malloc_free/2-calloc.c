#include <stdlib.h>

/**
* _calloc - Calloc
* @nmemb: N member
* @size: malloc size
*
* Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *t;
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = malloc(nmemb * size);

	if (t == NULL)
		return (NULL);

	p = (char *) t;

	while (i < nmemb * size)
	{
		*p++ = 0;
		i++;
	}

	return (t);
}
