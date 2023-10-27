#include "main.h"

/**
 * _strcpy - copy contents of one pointer into othe
 * @src: string pointer variable
 * @dest: string pointer variable
 *
 * Return: char *_strcpy
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len = 0;


	while (src[i] != '\0')
{
		len++;
		i++;
}
	for (i = 0 ; i <= len ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
