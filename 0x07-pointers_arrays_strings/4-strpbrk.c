#include "main.h"

/**
 * _strpbrk -searches a string for any of a set of bytes
 * @s: string pointer
 * @accept: string pointer
 *
 * Return: pointer to the byte in s 
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int len = 0;
	int count = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (accept[count] != '\0')
	{
		count++;
	}

	for (i = 0; i <= len; i++)
	{
	for (j = 0; j <= count; j++)
	{
		if (s[i] == accept[j])
			return (&s[i]);
	}
	}
	return (0);
}


