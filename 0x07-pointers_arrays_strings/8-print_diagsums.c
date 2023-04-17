#include "main.h"
#include <stdio.h>

/**
* print_diagsums - 
* @a: 
* @size: 
*/

void print_diagsums(int *a, int size)
{
	unsigned long i = 0;

	while (i < sizeof(a[i]))
	{
		unsigned long j = 0;

		while (j < sizeof(a[i]))
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
