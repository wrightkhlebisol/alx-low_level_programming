#include "variadic_functions.h"
/**
 * print_strings - Print strings
 * @separator: variable separator
 * @n: Number of variables
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(ap, n);
		while (i < n)
		{
			char *tempval = va_arg(ap, char*);
			(tempval == NULL) ?
				printf("%s", "(nil)") :
				printf("%s", tempval);
			i++;
			if (separator == NULL)
				continue;
			if (i == n)
			{
				printf("\n");
				break;
			}
			printf("%s", separator);
		}
		va_end(ap);
	}
}
