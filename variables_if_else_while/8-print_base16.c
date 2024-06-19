#include <stdio.h>
/**
 * main - print base sixteen
 *
 * Return: (0)
 *
 */
int main(void)
{
	char n = '0';
	char t = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (t <= 'f')
	{
		putchar(t);
		t++;
	}

	putchar('\n');

	return (0);
}
