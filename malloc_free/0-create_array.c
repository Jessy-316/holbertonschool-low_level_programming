#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array of chars.
 * @size: Amount of arrays to create.
 * @c: Dictates which char of arrays especifically to create.
 *
 * Return: Null if 0 or if it fails, otherwise a pointer of the array.
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *x;

	if (size == 0)
		return (NULL);

	x = malloc(sizeof(char) * size);

	if (x == NULL)
		return (NULL);

	for (i = 0; x[i] == '\0'; i++)
		x[i] = c;

	return (x);
}
