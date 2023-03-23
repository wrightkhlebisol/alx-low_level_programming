#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - prints lowercase alphabet
*
* Return: nothing (void)
*/

void print_alphabet_x10(void)
{
	int x;
	int i = 0;

	while (i < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		i++;
		_putchar('\n');
	}
}
