#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - Connects to the correct operating function.
 * @s: Operator passed as argument to the program.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
	int i;

	while (ops[i]->op != NULL)
		if (strcmp(ops[i]->op, s) == 1)
			return (ops[i]->f);
	i++;
}
