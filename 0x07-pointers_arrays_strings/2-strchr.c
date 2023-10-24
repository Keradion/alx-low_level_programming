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

		while (s[count] != c)
	{

		count++;
	}
		if (s[count] == c)
		{
			return (&s[count]);
		}
			
		return ('\0');
}
