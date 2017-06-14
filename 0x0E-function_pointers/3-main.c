#include "3-calc.h"
/**
 * main - runs function depending on user input
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = argv[2];

	if (b == 0 && (*operator == '/' || *operator ==  '%'))
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = (get_op_func(operator)(a, b));
	printf("%d\n", result);

	return (0);
}
