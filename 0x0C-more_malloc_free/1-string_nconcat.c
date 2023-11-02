#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to concat
 *
 * Return: pointer to new location
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *ptr;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	if (n >= len2)
		n = len2;

	ptr = malloc(len1 + n + 1);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)

		ptr[i] = s1[i];

	for (i = 0; i < n; i++)
	{
		ptr[len1] = s2[i];
		len1++;
	}
	ptr[len1] = '\0';
	return (ptr);
}

