#include "main.h"
/**
 * create_array - Create an array of chars and init with specific char
 * @size: size of array
 * @c: char to print
 *
 * Return: Pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i = 0;

	if (size < 1)
		return (NULL);

	ch = malloc(size * sizeof(c));

	if (ch == NULL)
		return (NULL);

	while (i < size)
	{
		ch[i] = c;
		i++;
	}

	return (ch);
}
