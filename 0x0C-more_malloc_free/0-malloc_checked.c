#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: number of bytes
 *
 * Return: pointer to reserved space
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
