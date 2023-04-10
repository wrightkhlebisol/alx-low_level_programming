# include <stdio.h>

/**
* main - Prints number of passed arguments
* @argc: Count of arguments passed
* @argv: Array of argument values
*
* Return: integer
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
