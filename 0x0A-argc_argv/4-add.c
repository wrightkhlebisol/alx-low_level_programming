# include <stdio.h>

/**
* main - Adds given arguments
* @argc: Count of arguments passed
* @argv: Array of argument values
*
* Return: integer
*/

int main(int argc, __attribute__((__unused__)) char *argv[])
{
	int totalSum = 0;

	if (argc > 2)
	{
		while (argc--)
		{
			if (argc == 0)
			{
				continue;
			}
			totalSum += (int)argv[argc];
		}
		printf("%d\n", totalSum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (1);
	}
}
