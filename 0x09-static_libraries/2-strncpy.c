#include "main.h"

/**
 * _strncpy - copy one string into another
 * @dest: destination string
 * @src: source string
 * @n: number of charachter to be copied
 * 
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;



	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	
	}
	

	dest[i] = '\0';

	return (dest);
}
