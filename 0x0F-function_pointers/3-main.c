#include "3-calc.h"
/**
 * main - entry to code
 * @argc: argument count
 * @argv: argument value
 * Return: NULL or 0
 */
int main(int argc, char **argv)
{
	int opd_1, opd_2;
	char *opert;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opd_1 = atoi(argv[1]);
	opd_2 = atoi(argv[3]);
	opert = argv[2];

	if (opert[1] != 0)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(opert)(opd_1, opd_2));
	return (0);
}
