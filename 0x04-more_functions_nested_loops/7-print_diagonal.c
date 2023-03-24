#include <stdio.h>
#include "main.h"

/**
* print_diagonal - prints \ diagonally
* @n: number of \ to print
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		/* Outside loop for rows  */
		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
