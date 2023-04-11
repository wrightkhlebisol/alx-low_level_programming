#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiplies two numbers
* @argc: Count of arguments passed
* @argv: Array of argument values
*
* Return: integer
*/

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
