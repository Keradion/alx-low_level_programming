#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: string pointer variable
 *
 * Return: void
 */

void puts_half(char *str)
{
int len, i = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (len % 2 == 0)
	{
		i = len / 2;

		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}

	else if (len % 2 != 0)
	{
		i = (len - 1) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i + 1]);
		i++;
	}
	}	

_putchar('\n');
}
