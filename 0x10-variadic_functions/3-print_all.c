#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Prints a char.
 *
 * @arg: A va_list pointing to the argument.
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - Prints an integer.
 *
 * @arg: A va_list pointing to the argument.
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - Prints a float.
 *
 * @arg: A va_list pointing to the argument.
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - Prints a string.
 *
 * @arg: A va_list pointing to the argument.
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - Prints anything.
 *
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep = "";
	char c;
	void (*f)(va_list);

	const struct {
		char format;
		void (*func)(va_list);
	} map[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		c = format[i];

		while (map[j].format)
		{
			if (map[j].format == c)
			{
				printf("%s", sep);
				f = map[j].func;
				f(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
