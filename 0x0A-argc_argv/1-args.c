#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: array of command line argument
 * Return: always 0
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
