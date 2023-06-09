#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: array of command line argument
 * Return: always 0
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc);
	return (0);
}
