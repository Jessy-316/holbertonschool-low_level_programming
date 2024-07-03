#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers.
 * @argc: Number of command lines.
 * @argv: Size of array.
 *
 * Return: -1 if it contains non-digits, 0 otherwise.
 */
int main(int argc, char *argv[])
{
	int num, digit, result = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		result += atoi(argv[num]);
	}

	printf("%d\n", result);

	return (0);
}
