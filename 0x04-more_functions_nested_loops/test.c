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
	int n = -13;
	int i;
		
	if (n <= 0)
        {
                _putchar('\n');
        }
        else
        {
                for (i = 0; i < n; i++)
                {
                        _putchar('_');
                }
                _putchar('\n');
        }
}
