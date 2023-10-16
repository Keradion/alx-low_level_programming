#include "main.h"

/**
 * print_rev - print a string in reverse followed by a new line 
 * @str: string pointer variable
 *
 * Return: void
 */
void print_rev(char *s)
{ 
	int i = 0;
	int j = 0;
	int temp = 0;

	while (s[i] != '\0')
	{	
		j++;
	i++;
	}

	while (i < j)
	{
		s[i] = temp;
		s[i] = s[j];
		s[j] = temp;
		_putchar(s[i]);
	}
	_putchar('\n');

}
