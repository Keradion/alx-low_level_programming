#include "main.h"

/**
 * _puts - prints a string followed by a new line 
 * @str: string variable
 *
 * Return: void 
 */

void _puts(char *str)
{
	int i = 0;
	while(str[i] != '\n')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
