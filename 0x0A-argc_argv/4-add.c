# include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Adds given arguments
* @argc: Count of arguments passed
* @argv: Array of argument values
*
* Return: integer
*/

int main(int argc, __attribute__((__unused__)) char *argv[])
{
	int x;
	int y;
	int totalSum = 0;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (!isdigit(argv[x][y]))
				{
					printf("Error\n");
					return (1);
				}
			}
			totalSum += atoi(argv[x]);
		}
	}
	printf("%d\n", totalSum);
	return (0);
}
