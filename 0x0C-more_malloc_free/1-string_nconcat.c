#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *@n: bytes to concat
 * Return: pointer to new location
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int len = 0;
	unsigned int len1 = 0;
	char *ptr;

	while (s1[len] != '\0')
		len++;

	while (s2[len1] != '\0')
		len1++;

	if ( n >= len1)

	ptr = malloc(len + len1 + 1);

	else
	
	ptr = malloc(len + n + 1);	

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = s1[i];

	for (i = 0; i < n; i++)
	{
		ptr[len] = s2[i];
		len++;
	}

	ptr[len] = '\0';
	return (ptr);
} 
