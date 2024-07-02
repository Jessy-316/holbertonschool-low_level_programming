#include "main.h"
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
	return (_sqrt_recursion(n, 2));
}
