#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value starting from
 * @max: maximum value upto
 *
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[i++] = min;
		min++;
	}
	return (ptr);
}
