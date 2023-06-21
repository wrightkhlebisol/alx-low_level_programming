#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: Name to print
 * @f: callback function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
