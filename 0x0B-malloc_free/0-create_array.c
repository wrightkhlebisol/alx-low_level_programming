#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates array of size
* @size: Size of array
* @c: Char to init
*
* Return: char pointer
*/

char *create_array(unsigned int size, char c)
{
	char *t;

	if (size <= 0)
	{
		return (NULL);
	}
	t = (char *)malloc(sizeof(c) * size);
	if (t != NULL)
	{
		unsigned int i = 0;

		while (i < size)
		{
			t[i] = c;
			i++;
		}
	}
	return (t);
}
