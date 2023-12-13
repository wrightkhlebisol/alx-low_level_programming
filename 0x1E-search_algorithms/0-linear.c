#include "search_algos.h"
/**
 * linear_search - Iterate each element and compare
 * @array: Array to search element in
 * @size: Length of the array
 * @value: Value to look for
 *
 * Return: index on sucess, -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
