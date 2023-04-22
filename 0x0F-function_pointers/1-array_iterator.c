#include <stddef.h>

/**
* array_iterator - Iterate array
* @array: array to iterate
* @size: size of array
* @action: Function to call
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
