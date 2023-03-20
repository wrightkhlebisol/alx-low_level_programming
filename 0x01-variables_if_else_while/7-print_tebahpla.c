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

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
