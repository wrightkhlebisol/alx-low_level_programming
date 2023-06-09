#include "main.h"

/**
 * _pow_recursion - calculate power of given int
 * @x: integer to get power of
 * @y: power to raise
 *
 * Return: power of x to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
