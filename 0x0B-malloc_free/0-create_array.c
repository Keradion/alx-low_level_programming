#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it with a specific char
 * @size: size of an array
 * @c: char
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int = 0;
	char *ptr = '\0';

	ptr = (char *)malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)

		return (NULL);

	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}
