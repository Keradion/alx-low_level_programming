#include "main.h"
#include <stddef.h>
/**
 * _strchr - find a charachter occurence in a given string
 * @s: pointer to string
 * @c: target character to be search inside a string
 *
 * Return: pointer adress
 */

char *_strchr(char *s, char c)
{
	int count = 0;

		while (s[count] != c && s[count] != '\0')
	{

		count++;
	}
		if (s[count] == c)
		{
			return (&s[count]);
		}

		else
			
		return ('\0');
}
