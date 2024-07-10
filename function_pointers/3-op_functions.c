#include "function_pointers.h"
#include "3-calc.h"
/**
 * op_add - Adds the value of both integers.
 * @a: First integers.
 * @b: Second integers.
 *
 * Return: The sum of both integers.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Substracts the value of both integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The difference of both integers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies the value of both integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The product of both integers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides the value of both integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of both integers.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Divides the value of both integers and returns the value.
 * @a: First integer.
 * @b: Second onteger.
 *
 * Return: The remainder of the division of both integers.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
