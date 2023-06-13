#include "main.h"
/**
 * str_concat - Concatenate two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: NULL or Pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ch = NULL;
	int i = 0;

	if (s1 == NULL && s2 == NULL)
	{
		*ch = '\0';
		return ch;
	}	

	ch = malloc(sizeof(s1) + sizeof(s2));
	if (ch == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		while (*s1 != '\0')
		{
			ch[i] = *s1;
			s1++;
			i++;
		}
	}

	if (s2 != NULL)
	{
		while (*s2 != '\0')
		{
			ch[i] = *s2;
			s2++;
			i++;
		}
	}
	ch[i] = '\0';
	return (ch);
}
