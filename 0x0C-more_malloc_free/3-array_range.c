#include "main.h"
/**
 * array_range - Creates an array if integers
 * @min: Minimum integer
 * @max: Maximum integer
 *
 * Return: NULL or Pointer
 */
int *array_range(int min, int max)
{
	int *numarray, i = 0;

	if (min > max)
		return (NULL);

	numarray = malloc(sizeof(int) * (max - min) + 1);
	if (numarray == NULL)
		return (NULL);

	while (min <= max)
		numarray[i++] = min++;

	return (numarray);
}
