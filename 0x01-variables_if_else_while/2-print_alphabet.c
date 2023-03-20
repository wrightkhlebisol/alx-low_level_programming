#include <stdio.h>
#include <ctype.h>

/**
* main - start the app
*
* Return: 0
*/

int main(void)
{
	for (char x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	return (0);
}
