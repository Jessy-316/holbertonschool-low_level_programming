#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main header.
 * @argc: Number of command lines.
 * @argv: Size of array.
 *
 * Return: Name of file.
 */
int main(int argc, char *argv[])
{
	int digit1, digit2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	digit1 = atoi(argv[1]);
	digit2 = atoi(argv[2]);
	result = digit1 * digit2;

	printf("%d\n", result);

	return (0);
}
