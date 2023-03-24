#include <stdio.h>

/**
* _isupper - checks if c is upper
* @c: Character to compare
*
* Return: always 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
