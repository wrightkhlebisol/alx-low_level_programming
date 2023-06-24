#include "function_pointers.h"
/**
 * array_iterator - Executes given function on elements of an array
 * @array: Array to iterate on
 * @size: size of the array
 * @action: function to call per array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (size > 0 && array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
