#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of the array integer and a new line.
 * @a: Array to print.
 * @n: Number of elements.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
