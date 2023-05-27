#include "main.h"

/**
 * get_bit - Returns value of a bit at given index
 * @n: Given integer
 * @index: index, starting from zero of bit
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	return ((n & mask) != 0);
}
