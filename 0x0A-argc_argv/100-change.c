#include <stdio.h>
#include <stdlib.h>

/**
 * main - Minimum number of Coins for Change
 * @argc: number of arguments
 * @argv: array of command line argument
 * Return: always 0
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	int change[5] = {25, 10, 5, 2, 1}, i = 0;

	if (argc < 1 || argc > 1)
	{
		printf("Error\n");
		return (1);
	}

	int amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (-1);
	}

	while (i < 5)
	{
		if (amount / change[i] != 0)
		{
			continue;
		}
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
