#include "main.h"

/*
 * main - a function that prints letters in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10();

int main(void)
{
	print_alphabet_x10();

	return (0);

}

void print_alphabet_x10()
{
	int i = 97;
	int j = 0;

		while ( j < 10 )
		{
	while (i < 123 )
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
	i = 97;	
	j++;}
	return;
}
