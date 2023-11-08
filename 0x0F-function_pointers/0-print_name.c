#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	/* If the function pointer or name pointer has hold null value */
	if (f == NULL || name == NULL)
		return;

	f(name);


}
