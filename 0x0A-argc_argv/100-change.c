#include <stdio.h>
#include <stdlib.h>

/**
 * main - Minimum number of Coins for Change
 * @argc: number of arguments
 * @argv: array of command line argument
 * Return: cents - no of cange to return
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	int change[5] = {25, 10, 5, 2, 1}, cents = 0, i = 0, amount = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (-1);
	}

	while (i < 5)
	{
		if (amount < change[i])
		{
			i++;
			continue;
		}
		else
		{
			while (amount > change[i])
			{
				printf("%d, %d, %d\n", cents, amount, change[i]);	
				amount = amount / change[i];
				cents++;
			}
			i++;
		}
		printf("in while %d\n", change[i]);	
	}
	printf("%d\n", cents);
	return (0);
}
