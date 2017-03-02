#include "holberton.h"
/**
 * my_prime - test for prime
 * @i: count
 * @n: number to be tested
 * Return: input for is_prime_number
 */
int my_prime(int i, int n)
{
	if (n % i == 0)
		return (0);

	else if (i * i > n)
		return (1);

	return (my_prime(i + 1, n));
}

/**
 * is_prime_number - check if input is prime
 * @n: integer to be tested
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 0)
		return (0);

	else if (n == 2)
		return (1);

	else
		return (my_prime(i, n));
}
