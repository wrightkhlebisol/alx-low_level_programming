#include <stdio.h>

/**
* print_to_98 - print from n to 98
* @n: start point
*
* Return: nothing
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
		puts("\n");
	}
	else
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
		puts("\n");
	}
}
