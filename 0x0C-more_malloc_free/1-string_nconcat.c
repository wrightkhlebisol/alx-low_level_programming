#include "main.h"
int countchar(char *str)
{
	if (*str != '\0')
		return (0);

	return (1 + countchar(str++));
}

/**
 * string_nconcat - Concatenates 2 strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes to add
 *
 * Return: NULL or Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatstring;
	unsigned int i = 0, j = 0;

	concatstring = malloc(countchar(s1) + n);
	if (concatstring == NULL)
		return (NULL);

	while(*s1 != '\0')
		concatstring[i++] = *s1++;

	while(j < n)
	{
		concatstring[i++] = *s2++;
		j++;
	}

	return (concatstring);
}
