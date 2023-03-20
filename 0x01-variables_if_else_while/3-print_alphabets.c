#include <stdio.h>

/**
* main - start the app
*
* Return: 0
*/

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	return (0);
}
