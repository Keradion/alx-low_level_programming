#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_stings - print strings
 * @separator: string to be printed between the strings
 * @n: number of stings passed
 *
 * Retrun: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *string;

	va_start(args, n);

	while (i < n)
	{

		string = va_arg(args, char *);

		if (string == NULL)
			printf("nill");
		else
		printf("%s", string);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);

		i++;
	}
	printf("\n");
	va_end(string);
}
