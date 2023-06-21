#include "main.h"

/**
 * argstostr - Concatenate all args
 * @ac: arg count
 * @av: arg value
 *
 * Return Pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	while (*av != NULL)
	{
		printf("%s\n", *av);
		av++;
	}
	return (*av);
}
