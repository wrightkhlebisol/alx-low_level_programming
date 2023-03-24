#include <stdio.h>

/**
* _isdigit - checks if c is upper
* @c: Character to compare
*
* Return: always 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
