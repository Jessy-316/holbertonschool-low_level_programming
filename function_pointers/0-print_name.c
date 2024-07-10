#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - Prints name.
 * @name: Name to print.
 * @f: Function pointer.
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
