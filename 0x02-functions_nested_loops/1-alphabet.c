#include <stdio.h>
#include "_putchar.c"
#include "main.h"

/**
* main - start the app
*
* Return: always 0
*/

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return (0);
}
