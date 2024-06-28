#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char c = 'a';

	while (i < 26)
	{
		putchar(c);
		i++, c++;
	}

	i = 0;
	c = 'A';
	while (i < 26)
	{
		putchar(c);
		i++, c++;
	}

	putchar('\n');

	return (0);
}
