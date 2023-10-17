#include "main.h"

/**
 * _strcpy - copy one string into another string 
 * @src: string pointer variable
 * @dest: string pointer variable
 *
 * Return: char *_strcpy
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while ( src[i] != '\n')
	{
		len++;
		i++;
	}
	
	for (i = 0 ; i<= len ; i++)
	{
		dest[i] = src[i];
	}
	

	return (dest);
}
