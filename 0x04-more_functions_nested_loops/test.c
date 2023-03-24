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
	print_line(40);	
}

void print_line(int n)
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

                        for(j = 0; j < n; j++)
                        {
                                if(j == i)
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
