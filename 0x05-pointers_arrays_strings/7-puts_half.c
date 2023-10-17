#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: string pointer variable
 *
 * Return: void
 */

void puts_half(char *str);
{
	int i = 0;
	int len = 0;

	while (str[i] != '\n')
	{
		len++;
		i++;
	}
	for (i = 0; i <= (len - 1) / 2; i++
