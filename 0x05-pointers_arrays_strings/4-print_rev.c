#include "main.h"

/**
 * print_rev - reverse string and print
 * @str: string pointer variable
 *
 * Return: void 
 */
void print_rev(char *s)
{
	int i = 0;
	int j = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	j = len - 1;

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}

	_putchar('\n');
}


