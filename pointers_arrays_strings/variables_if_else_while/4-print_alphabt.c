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
		if (c != 'e' && c != 'q')
		{
			putchar(c);
			i++, c++;
		}
		else
		{
			i++, c++;
		}
	}

	putchar('\n');

	return (0);
}
