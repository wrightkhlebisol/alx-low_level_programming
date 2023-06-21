#include "main.h"

/**
 * strtow - Split string to word
 * @str: Word to split
 *
 * Returns: Pointer or NULL
 */
int countchar(char *str)
{
	int charcount = 0;
	if (*str == '\0')
		return (charcount);
 	
	if (*str == ' ' && *(str + 1) == ' ')
 		return (*str++);
	
	return (1 + countchar(*str++));
/**
	while (*str != '\0')
	{
		if (*str == ' ' && *(str + 1) == ' ')
		{
			*str++;
			continue;
		}
		charcount++;
		*str++;
	}
	return (charcount);
*/
}

char **strtow(char *str)
{
	char **word;
	int i = 0;

	if (str == NULL || *str == "")
	{
		return (NULL);
	}

	word = malloc(charcount(str) + 1);
	
	while (str != '\0')
	{
		if (*str == ' ' && *(str + 1) == ' ')
		{
			*str++;
			continue;
		}
		malloc(word[i]
	}
	word[i] = NULL;
	return (word);
}
