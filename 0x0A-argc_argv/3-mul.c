#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply 2 numbers
 * @argc: number of arguments
 * @argv: array of command line argument
 * Return: always 0
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
