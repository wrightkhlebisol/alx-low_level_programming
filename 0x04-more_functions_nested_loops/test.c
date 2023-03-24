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
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	return (0);
}
