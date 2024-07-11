#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Main function.
 * @argc: Argument count.
 * @argv: String of arguments in array.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (((*argv[2] == '/') || (*argv[2] == '%')) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);

	return (0);
}
