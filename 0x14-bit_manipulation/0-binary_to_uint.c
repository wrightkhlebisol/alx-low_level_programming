#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: string of 0 and 1 chars
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (size_t i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			result = (result << 1) | 0;
		else if (b[i] == '1')
			result = (result << 1) | 1;
		else
			return (0);
	}

	return (result);
}
