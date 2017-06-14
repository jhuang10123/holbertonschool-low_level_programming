#include "3-calc.h"
/**
 * main - runs function depending on user input
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, -1 on failure
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char *operator;

	if (argc != 4)
	{
		printf(" arg ct Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = argv[2];

	if (b == 0 && (*(argv[2]) == '/' || *(argv[2]) ==  '%'))
	{
		printf(" division Error\n");
		exit(100);
	}

	if (get_op_func(operator) == NULL)
	{
		printf("null Error\n");
		exit(99);
	}

	result = (get_op_func(operator)(a, b));
	printf("%d\n", result);

	return (0);
}
