#include "search_algos.h"

/**
 * binary_search - Check if value is in array in 0(log(n))
 * @array: Array to search
 * @size: Size of array
 * @value: value to search
 *
 * Return: value index or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, high = size - 1, low = 0;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		print_array_ind(low, high);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}

	}

	return (-1);
}

/**
 * print_array_ind - Prints array from given start to end
 * @start: Start index of array
 * @end: End index of array
 */
void print_array_ind(size_t start, size_t end)
{
	printf("Searching in array: ");
	while (start <= end)
	{
		printf("%ld", start);
		if (start != end)
			printf(", ");
		start += 1;
	}
	printf("\n");
}
