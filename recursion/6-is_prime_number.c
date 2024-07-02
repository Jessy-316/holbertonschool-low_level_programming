#include "main.h"
/**
 * find_multipliers - Looks for multipliers in n.
 * @n: Base number.
 * @i: Iterator
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int find_multipliers(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (find_multipliers(n, i + 1));
}
/**
 * is_prime_number - Checks if n is a prime number.
 * @n: Base number.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (find_multipliers(n, 2));
}
