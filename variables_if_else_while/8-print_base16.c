#include <stdio.h>
/**
 * main - print base sixteen
 *
 * Return: (0)
 *
 */
int main(void)
{
	char l = '0';
	char p = 'a';

	while (l <= '9')
	{
		putchar(l);
		l++;
	}
	while (p <= 'f')
	{
		putchar(p);
		p++;
	}

	putchar('\n');

	Return(0);

}
