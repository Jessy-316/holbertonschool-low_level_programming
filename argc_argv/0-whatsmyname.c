#include "main.h"
#include <stdio.h>

/**
 * main - Main header.
 * @argc: Number of command lines.
 * @argv: Size of array.
 *
 * Return: Name of file.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
	return (0);
}
