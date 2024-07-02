#include <stdio.h>

/**
 * main - Main header.
 * @argc: Number of command lines.
 * @argv: Value of array.
 *
 * Return: Number of arguments.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
