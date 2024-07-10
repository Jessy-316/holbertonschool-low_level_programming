#include "function_pointers.h"
/**
 * print_name - Prints name.
 * @name: Name to print.
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
