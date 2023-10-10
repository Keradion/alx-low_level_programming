/*
 * Author : Daniel
 * Title : 2-print_alphabet.
 *
 */

#include "main.h"

/*
 * main - a function that prints letters in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();

	return (0);

}

void print_alphabet()
{
	int i = 97;
	while (i < 123 )
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');

	return;
}
