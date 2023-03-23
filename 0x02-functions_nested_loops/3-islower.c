#include <stdio.h>
#include "main.h"

/**
* _islower - checks lowercase character
* @c: character to check
*
* Return: always 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
