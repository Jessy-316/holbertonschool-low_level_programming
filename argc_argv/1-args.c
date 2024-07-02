#include "main.h"
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
	argv[0] = 0;

	printf("%d\n", argc - 1);
	return (0);
}
