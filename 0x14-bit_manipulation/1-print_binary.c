#include "main.h"

/**
 * print_binary - Print binary
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leading_zeros;

	if (n == 0)
	{
		printf("0");
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	leading_zeros = 1;

	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			leading_zeros = 0;
			printf("1");
		}
		else if (!leading_zeros)
			printf("0");

		mask >>= 1;
	}
}
