#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers separated by a separator string
 * @separator: The string to print between numbers
 * @n: The number of integers to print
 * @...: Variadic list of integers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
