/*
 * Author : Daniel
 * Title : 2-print_alphabet.
 *
 */

#include "main.h"

/*
 * main - a function that prints letters in lowercase
 */

void print_alphabet(void)
{

	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
