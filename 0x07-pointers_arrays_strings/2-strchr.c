#include "main.h"

/**
 * _strchr - function that lochates a character in a string
 * @s: pointer to string
 * @c: target character to be search
 *
 * Return: pointer address
 */

char *_strchr(char *s, char c)
{
	int count = 0;
{
		while (s[count] != c)
	{

		count++;
	}

	return (&s[count]);
}

return (0);
}
