#include "holberton.h"
/**
 * _prime - check if given number is divisible by i
 * @n: given number
 * @i: divisor
 * Return: 1 or 0;
 */
int _prime(int n, int i)
{

	if (i >= n)
		return (1);

	if (n % i == 0)
		return (0);

	else
		return (_prime(n, i + 1));

}
/**
* is_prime_number - check if given number is prime
* @n: given number
* Return: 1 if prime or 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime(n, 2));

}
