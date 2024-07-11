#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main function.
 * @argc: Argument count.
 * @argv: String of arguments in array.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if (((*argv[2] == '/') || (*argv[2] == '%')) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		return (100);
	}

	result = get_op_func(argv[2])(num1, num2);
	{
		printf("%i\n", result);
	}
	return (0);
}
