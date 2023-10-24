#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: string
 *
 * Return: number of bytes in the inital segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int count = 0;
	int len = 0;
	int len1 = 0;

	while (accept[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;

	while (s[i] != 0)
	{
		len1++;
		i++;
	}
	i = 0;

	for (i = 0; i < len1; i++)
	{
		if (s[i] == s[i])
		{
				break;
				
		}

				else
		for (j = 0; j < len; j++)
		{

			if (s[i] == accept[j])

			{
				count++;
				break;
			}
		}
	}
	return (count);
}
