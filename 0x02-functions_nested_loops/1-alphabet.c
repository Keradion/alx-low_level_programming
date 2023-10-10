/*
 * Author : Daniel
 * Title : 2-print_alphabet.
 *
 */

#include "main.h"

/**
 * print_alphabet - a function that prints letters in lowercase
 *
 * Return : void
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
