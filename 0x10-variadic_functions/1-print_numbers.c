#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_numbers - print numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: numbers of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	if ( n == 0)
		return;

	while (i < n)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL)
		printf("%c ", *separator);

		i++;
	}
	va_end(args);
	printf("\n");
}
