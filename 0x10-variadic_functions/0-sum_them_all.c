#include "variadic_functions.h"
/**
 * sum_them_all - Sum all args
 * @n: number of args
 * Return: Sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list ap;

	if (n <= 0)
		return (0);

	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	return (sum);
}
