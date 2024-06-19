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
		if (i != 'e' && i != 'q')
	{
		putchar(c);
	}
		else
	{
		i++, c++;
	}
	

	putchar('\n');

	return (0);
}
