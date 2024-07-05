#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc- Allocates memory for an array using malloc.
 * @nmemb: Elements of memory needed.
 * @size: Size in bytes of each element.
 *
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size >= UINT_MAX / nmemb || nmemb >= UINT_MAX / size)
		return (NULL);
	x = malloc(size * nmemb);
	if (x == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		x[i] = 0;
	return ((void *)x);
}
