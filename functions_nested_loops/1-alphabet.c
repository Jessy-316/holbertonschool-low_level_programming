#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i = 0;
	char c = 'a';

	while (i < 26)
	{
		_putchar(c);
		i++, c++;
	}

	_putchar('\n');
}
