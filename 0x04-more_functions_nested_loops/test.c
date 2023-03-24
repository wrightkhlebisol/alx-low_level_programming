#include <stdio.h>
#include "main.h"
#include "_putchar.c"

/**
* main - prints numbers from 0 to 9
*
* Return: always 0
*/

int main(void)
{
	print_square(3);	
}

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		/* Outside loop for rows  */
		for (i = 0; i < size; i++)
		{
			int j;

			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
