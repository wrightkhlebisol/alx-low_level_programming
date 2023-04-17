#include "main.h"

/**
* rot13 - Encode a string using rot13
* @s: string
*
* Return: string
*/
char *rot13(char *s)
{
	int x, y;

	char alphNorm[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char alphRo13[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	while (s[x] != '\0')
	{
		for (y = 0; alphNorm[y] != '\0' ; y++)
		{
			if (s[x] == alphNorm[y])
			{
				s[x] = alphRo13[y];
				break;
			}
		}
	}
	return (s);
}
