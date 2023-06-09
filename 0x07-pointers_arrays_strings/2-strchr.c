#include <stdio.h>
#include "main.h"

/**
* _strchr - Returns pointer to the first occurenece of char c in string s
* @s: String to locate char in
* @c: char to locate
*
* Return: char
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != c)
	{
		i++;
		if (s[i] == '\0' && s[i] != c)
		{
			return (NULL);
		}
	}

	return (s + i);
}
