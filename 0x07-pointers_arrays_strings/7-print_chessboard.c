#include "main.h"
#include "_putchar.c"

/**
* print_chessboard - Prints a chessboard
* @a: Multidimensional array to print
*/

void print_chessboard(char (*a)[8])
{
	unsigned long i = 0;

	while (i < sizeof(a[i]))
	{
		unsigned long j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
