#include "main.h"

/**
 * factorial - Compute factorial of given integer
 * @n: integer to factor
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
