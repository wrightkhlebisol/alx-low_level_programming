#include "3-calc.h"
/**
 * op_add - Addition Operation
 * @a: First operand
 * @b: Second operand
 * Return: result of operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction Operation
 * @a: First operand
 * @b: Second operand
 * Return: result of operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Mutiplication Operation
 * @a: First operand
 * @b: Second operand
 * Return: result of operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division Operation
 * @a: First operand
 * @b: Second operand
 * Return: result of operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulo Operation
 * @a: First operand
 * @b: Second operand
 * Return: result of operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
