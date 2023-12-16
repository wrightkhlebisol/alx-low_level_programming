#include "search_algos.h"

/**
 * jump_search - Linear search while jumping root of array size
 * @array: Array to search
 * @size: Size of passed array
 * @value: Value to search
 *
 * Return: -1 if not found, index if found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, start = 0, end = 0;
	int jump_step = sqrt(size);

	if (array == NULL)
		return (-1);

	/* Linear jump in steps */
	while (i < size)
	{
		if (array[i] >= value)
		{
			start = i - jump_step;
			end = i;
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i += jump_step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i - jump_step, i);

	while (start <= end)
	{
		if (start == end)
			printf("Value checked array[%ld] = [%d]\n", i - jump_step, array[i - jump_step]);
		else
			printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (array[start] == value)
		{
			return (start);
		}
		start++;
	}
	return (-1);
}
