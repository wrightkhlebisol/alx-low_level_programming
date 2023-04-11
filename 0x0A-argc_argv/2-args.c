# include <stdio.h>

/**
* main - Prints passed arguments
* @argc: Count of arguments passed
* @argv: Array of argument values
*
* Return: integer
*/

int main(int argc, char *argv[])
{
	
	while (argc--)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}
