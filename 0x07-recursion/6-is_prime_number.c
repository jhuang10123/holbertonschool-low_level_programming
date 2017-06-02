#include "holberton.h"
/**
 * _prime - check if given number is divisible by i
 *
 *
 * Return:
 */
int _prime(int n, int i)
{
	int count, res;

	res = 0;
        if (i == 1)
		res += _prime (n, i + 1);

/* exit condition */
	if (i >= n)
		return (0);

	count = n % i;

	return (count);

/*


	_prime(n, i + 1);

	if (n % i != 0)
		return (1);

	return (0);
*/

}
/**
* is_prime_number - check if given number is prime
* @n: given number
* Return: 1 if prime or 0
*/
int is_prime_number(int n)
{
	int count;

	if (n <= 1)
		return (0);

	return ( _prime(n, 1));


	return (count);
}
