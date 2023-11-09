#include "3-calc.h"

/**
 * op_add - return sum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return difference of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: diffrence of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return multiplication of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - returns modulus of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: modulus of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	return (a % b);
}
