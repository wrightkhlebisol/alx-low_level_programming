#include "main.h"

/**
 * _strdup - Create copy of given string
 * @str: String to duplicate
 *
 * Return: Pointer or NULL
 */
char *_strdup(char *str)
{
	char *ch;
	int i = 0;

	if (str == NULL)
		return (NULL);

	ch = malloc(sizeof(str));

	if (ch == NULL)
		return (NULL);

	while (*str != '\0')
	{
		ch[i] = *str;
		str++;
		i++;
	}

	ch[i] = '\0';
	return (ch);
}
