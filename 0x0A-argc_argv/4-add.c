#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Add positive numbers to infinity
 * @argc: number of arguments
 * @argv: array of command line argument
 * Return: always 0
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	int sum = 0, i = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	while (i < (argc - 1))
	{
		if (!atoi(argv[i + 1]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i + 1]);
		i++;
	}

	printf("%d\n", sum);
	return (sum);
}
