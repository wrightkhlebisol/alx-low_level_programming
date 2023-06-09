#include <stdio.h>

/**
 * main - prints all recieved arguments
 * @argc: number of arguments
 * @argv: array of command line argument
 * Return: always 0
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
