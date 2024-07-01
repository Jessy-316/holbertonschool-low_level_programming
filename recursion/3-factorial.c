#include "main.h"
/**
 * factorial - Does factorial computations.
 * @n: Determines the factorial numbers.
 *
 * Return: Returns the value of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
