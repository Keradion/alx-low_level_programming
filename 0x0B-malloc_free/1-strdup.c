#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newlly allocated space
 * @str: string to be store in reserved space
 *
 * Return: char *
 */

char *_strdup(char *str)
{
	char *ptr = '\0';
	int size = 0;
	int i = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	ptr = (char *)malloc(size + 1);

	if (str == NULL)

		return (NULL);
	if (ptr == NULL)
	return(NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
