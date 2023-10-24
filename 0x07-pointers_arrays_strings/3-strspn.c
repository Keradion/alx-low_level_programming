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
	unsigned int count = 0;
	int len = 0;
	int len1 = 0;
	unsigned int result = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (accept[len1] != '\0')
	{
		len1++;
	}
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len1; j++)
		{
			if (s[i] == accept[j])
			 count++;
		}
		result++;
	
		if ( count < result  )
			break;
	}
	return (count);
}
