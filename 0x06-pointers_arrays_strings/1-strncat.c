#include "main.h"

/**
 * _strncat - conacatenates n charachters of string 2 into string 1
 * @dest: string 1
 * @src: string 2
 * @n: number of charachter to be concatenated
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int count = 0;

	while (dest[i] != '\0')
	{
		count++;
		i++;
	}
	i = 0;
	for (i = 0 ; i <= (n - 1); i++)
	{
	dest[count++] = src[i];
	}

	return (dest);
}
