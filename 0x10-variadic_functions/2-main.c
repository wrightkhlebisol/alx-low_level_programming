#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 3, "Jay", "Django", NULL);
   print_strings(NULL, 4, "You ", "know ", "nothing, ", "Jon Snow");
   print_strings("; ", 0);
   return (0);
}
