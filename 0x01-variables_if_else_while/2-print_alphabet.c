#include <stdio.h>
#include <ctype.h>

/**
* main - start the app
*
* Return: 0
*/

int main(void)
{
	char x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	return (0);
}
