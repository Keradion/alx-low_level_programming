#include "3-calc.h"

/**
 * get_op_func - select appropirate function to execute the operation
 * @s: operand from user
 *
 * Return: function pointer
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
for (i = 0; i < 5; i++)
{
	if (*ops[i].op == *s && *(++s) == '\0')
		return (op[i].f);
}
return (NULL);
}
