#include "main.h"
/**
 * find_root - Calculates a variable to run with n.
 * @n: Base number.
 * @i: Iterator.
 * Return: i.
 */
int find_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i <= n)
		return (find_root(n, i + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - Finds the natural square root of a number.
 * @n: Number to find the natural square root.
 *
 * Return: The natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_root(n, 2));
}
