#include "main.h"

/**
* _memset - Fills memory with a constant byte
* @s: memory to print to
* @b: char to print in memory
* @n: number of bytes to add
*
* Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		s[c] = b;
		c++;
	}
	return (s);
}
