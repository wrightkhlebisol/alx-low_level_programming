#include "3-calc.h"
/**
 * get_op_func - Get operation function
 * @s: opeation type
 * Return: int
 */
int (*get_op_func(char __attribute__((unused)) *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	return (0);
}
