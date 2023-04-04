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
	char new_s[n];
	int c = 0;

	while (c < n)
	{
		new_s[c] = b;
		c++;
	}
	return (new_s);
}
