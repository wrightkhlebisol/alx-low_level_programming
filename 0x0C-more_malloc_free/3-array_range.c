#include <stdlib.h>

/**
* array_range - Creates and array of integers
* @min: Minimum
* @max: Maximum
*
* Return: Integer
*/

int *array_range(int min, int max)
{
	int size;
	int *result;
	int i = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	result = (int *) malloc(size * sizeof(int));
	if (result == NULL)
		return (NULL);

	while (i < size)
		result[i] = min + i;
		i++;

	return (result);
}
