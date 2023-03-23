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
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
	return (0);
}
