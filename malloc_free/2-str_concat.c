#include <stdio.h>
#include <stdlib.h>

/**
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	x = malloc(sizeof(char) * (i - 1 + j + 1));

	if (x == NULL)
		return (NULL);

	for (k = 0; x[k] != '\0'; k++)
		x[k] = s1[k];

	for (x[l] = s1[k] - 1; x[l] != '\0'; l++)
		x[l] = s2[l];

	return (x);
}
