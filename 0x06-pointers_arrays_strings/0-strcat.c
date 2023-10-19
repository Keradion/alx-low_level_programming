#include "main.h"
#include <stdio.h>

/**
 * _stract - concatenate two strings
 * @dest: string variable
 * @src: string variable
 *
 * Return: char*
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int count1 = 0;
	int count2 = 0;

	i = 0;
	while (dest[i] != '\0')
	{
		count1++;
		i++;
	}
	j = 0;

	while (src[j] != '\0')
	{
		count2++;
		j++;
	}

	i = 0;
	for (i = 0; i <= count2 ; i++)
	{
	dest[(count1++)] = src[i];
	}


	(dest[count1]) = '\0';
	return (dest);
}



