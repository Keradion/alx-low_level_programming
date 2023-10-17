#include "main.h"

/**
 * puts2 - print every charachter of a string starting with first charachter
 * @str: string pointer variable
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = 0; i <= len - 1; i = i + 2)
	{
	_putchar(str[i]);
	}
_putchar('\n');
		}
