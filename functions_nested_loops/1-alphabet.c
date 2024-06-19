#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: void
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
