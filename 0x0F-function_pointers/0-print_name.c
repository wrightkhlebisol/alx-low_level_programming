#include <stdio.h>

/**
* print_name - Prints a name with giving function
* @name: Name string
* @f: Function to call
*
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
