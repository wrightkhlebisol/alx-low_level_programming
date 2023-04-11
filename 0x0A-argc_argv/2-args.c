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
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
