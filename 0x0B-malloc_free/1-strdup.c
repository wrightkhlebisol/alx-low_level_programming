#include "main.h"
#include <stdlib.h>

/**
* _strdup - Return pointer to newly allocated memory
* @str: str to print
*
* Return: *char pointer to memory
*/

char *_strdup(char *str)
{
	char *t;
	unsigned long i = 0;

	if (str == NULL)
		return (str);

	t = malloc(sizeof(str));

	if (t == NULL)
		return (t);

	while (str[i] != '\0')
	{
		t[i] = str[i];
		i++;
	}

	return (t);
}
