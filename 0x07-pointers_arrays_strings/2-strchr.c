#include "main.h"

/**
 * _strchr - function that lochates a character in a string
 * @s: pointer to string
 * @c: target character to be search inside a string
 *
 * Return: pointer adress
 */

char *_strchr(char *s, char c)
{
	int count = 0;
{
		while (s[count] != c)
	{

		count++;
	}
		if (s[count] == c)
		{

	return (&s[count]);
		}
		else
		{
			return (0);
		}

}
return (0);
}
