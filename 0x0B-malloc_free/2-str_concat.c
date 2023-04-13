#include "main.h"
#include <stdlib.h>

/**
* str_concat - Concatenates 2 strings
* @s1: string 1
* @s2: string 2
*
* Return: *char pointer to memory
*/

char *str_concat(char *s1, char *s2)
{
	char *t;
	unsigned long i = 0;

	t = malloc(sizeof(s1) + sizeof(s2));

	if (t == NULL)
		return (t);

	while (i < (sizeof(s1) + sizeof(s2)))
	{
		while (*s1)
			t[i] = *s1++;
			i++;
		while (*s2)
			t[i] = *s2++;
			i++;
	}

	return (t);
}
