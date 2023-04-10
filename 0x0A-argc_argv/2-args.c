# include <stdio.h>
# include "main.h"
# include "_putchar.c"

/**
* main - Prints passed arguments
* @argc: Count of arguments passed
* @argv: Array of argument values
*
* Return: integer
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
