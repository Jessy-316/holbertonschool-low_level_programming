#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c = 'a';

	while (i < 26)
	{
		_putchar(c);
		i++, c++;
	}
	while (i == 26)
	{
		_putchar('\n');
	}

	_putchar('\n');
}
