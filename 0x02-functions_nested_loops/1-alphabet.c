#include <stdio.h>
#include "main.h"

/**
* print_alphabet - prints lowercase alphabet
*
* Return: nothing (void)
*/

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
