#include "main.h"

/**
 * _strstr - find first occurence of the substring needle in haystack
 * @haystack: string
 * @needle: string
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int len = 0;
	int len1 = 0;

	while (haystack[len] != '\0')
		len++;
	while (needle[len1] != '\0')
		len1++;
	for (i = 0 ; i < len1; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (needle[i] == haystack[j])
				return (&haystack[j]);
		}
	}
	return ('\0');
}
	
