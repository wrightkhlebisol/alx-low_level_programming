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
		if (x == 'Q' || x == 'E')
			continue;
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
