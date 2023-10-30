#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
	int len = 0;
	int len1 = 0;
	int i = 0;
	char *ptr = NULL;

	while (s1[len] != '\0')
		len++;

	while (s2[len1] != '\0')
		len1++;
	ptr = (char *)malloc(len + len1 + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = s1[i];

	}

	for (i = 0; i < len1; i++)
	{
		ptr[len + i] = s2[i];
	}
	ptr[len + i] = '\0';
	return (ptr);
}
