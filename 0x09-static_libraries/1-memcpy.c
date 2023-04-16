#include "main.h"

/**
* _memcpy - Copies memory area
* @dest: location to copy to
* @src:	char to copy
* @n: number of bytes to copy
*
* Return: char
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
