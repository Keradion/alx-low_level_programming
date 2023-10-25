#include "main.h"

/**
 * _strlen_recursion - find lenght of a string
 * @s: string
 *
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{return (0);
	}
	else 

	{
		count++;
		s++;
	count  = count + _strlen_recursion(s);
	

	}
	return (count);
}
