#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Executes a function pointer on each element of an array.
 * @array: Array of integers.
 * @size: Size of array.
 * @action: Function pointer.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
