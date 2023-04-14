#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return ((void *)ptr);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: first number to multiply
 * @num2: second number to multiply
 */
void multiply(char *num1, char *num2)
{
	int len1, len2;
	int *result;

	len1 = _strlen(num1);
	len2 = _strlen(num2);

	result = _calloc(len1 + len2, sizeof(int));

	if (result == NULL)
	{
		_putchar('0');
		_putchar('\n');
		exit(98);
	}

	calculate_product(num1, num2, len1, len2, result);

	print_result(len1, len2, result);

	free(result);
}

/**
 * calculate_product - calculates the product of two numbers
 * @num1: first number to multiply
 * @num2: second number to multiply
 * @len1: length of num1
 * @len2: length of num2
 * @result: array to store the result
 */
void calculate_product(char *num1, char *num2, int len1, int len2, int *result)
{
	int i, j, res;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			res = (num1[i] - '0') * (num2[j] - '0');
			result[i + j + 1] += res % 10;
			result[i + j] += res / 10;
		}
	}

	for (i = len1 + len2 - 1; i >= 0; i--)
	{
		if (result[i] > 9)
		{
			result[i - 1] += result[i] / 10;
			result[i] %= 10;
		}
	}
}

/**
 * print_result - prints the result of the multiplication
 * @len1: length of num1
 * @len2: length of num2
 * @result: array storing the result
 */
void print_result(int len1, int len2, int *result)
{
	int i = 0;

	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
	{
		_putchar('0');
	}
	else
	{
		while (i < len1 + len2)
			_putchar(result[i++] + '0');
	}

	_putchar('\n');
}
