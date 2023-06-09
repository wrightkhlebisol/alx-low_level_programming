#include <stdio.h>
#include "main.h"

/**
 * main - prints command name
 * @argc: number of arguments
 * @argv: array of command line argument
 * Return: always 0
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
