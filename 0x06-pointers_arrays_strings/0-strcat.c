#include "main.h"

/**
 * _strcat - function that conactenates two strings 
 * @dest: string variable
 * @src: string variable
 *
 * Return: char*
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k = 0 ;
	int len1 = 0;
	int length = 0;

	while ((*(dest[i])) != '\0')
	{
		len1++;
		i++;
	}
	

	while ((*(src[j])) != '\0')
	{
		length++;
		j++;
	}
	

	for (k = 1; k <= length; k++)
	{
	     (*(dest[len1 + k])) = (*(src[k]));
	}
	(*(dest[k])) = '\0';
	return (dest);
}



