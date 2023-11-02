#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate space for an array
 * @nmemb: number of array elements
 * @size: size per element
 *
 * Return: pointer to reserved space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	 int *ptr = NULL;
	 unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = '0';
	}

	return (ptr);
}
