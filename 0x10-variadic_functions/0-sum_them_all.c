#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that return the sum of all its parameters
 * @n: number of parameters passed
 *
 * Return: sum of argument values
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;

	/* variable to hold the value of the sum */

	int sum = 0;

	/* va_list type variable to hold all parameters passed */

	va_list arg;

	/* initalizes the variable of va_list type */

	va_start(arg, n);

	/* iteration to find sum using va_arg to retrieve argument values */

	for (i = 0; i < n; i++)
		sum = sum + va_arg(arg, int);

	return (sum);

	/* if no argument passed at all */

	if (n == 0)
		return (0);
}
