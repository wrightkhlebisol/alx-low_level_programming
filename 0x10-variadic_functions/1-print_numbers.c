#include "variadic_functions.h"
/**
 * print_numbers - Print numbers
 * @separator: separator
 * @n: Number of var args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;


	if (n > 0)
	{
		va_start(ap, n);
		while (i < n)
		{
			printf("%d", va_arg(ap, int));
			i++;
			if (i == n)
			{
				printf("\n");
				break;
			}

			if (separator == NULL)
				continue;
			printf("%s", separator);
		}
		va_end(ap);
	}
}
