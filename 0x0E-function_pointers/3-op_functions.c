#include <stdio.h>

/**
 * op_add - add 2 integers
 * @a: 1st int
 * @b: 2nd int
 * Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 ints
 * @a: 1st int
 * @b: 2nd int
 * Return: a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul: multiply 2 int
 * @a: 1st int
 * @b: 2nd int
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 int
 * @a: 1st int
 * @b: 2nd int
 * Return: a / b
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
 * op_mod - find remainder
 * @a: 1st int
 * @b: 2nd int
 * Return: remainder of division
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
