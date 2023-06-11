#include "main.h"

/**
 * _sqrt_recursion - Recursive square root
 * @n: integer to root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	return (_sqrt_recursion(n));
}
