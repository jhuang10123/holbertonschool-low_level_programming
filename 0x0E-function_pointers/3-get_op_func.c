#include "calc.h"
/**
 * get_op_func - selects operation function to perform asked by user
 * operator passed as argument to the program
 * Return: pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
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

	for (i = 0; ops->op != NULL; i++)
	{
		if (s == ops->op)
			return (ops->f);
	}
	return (NULL);
}
