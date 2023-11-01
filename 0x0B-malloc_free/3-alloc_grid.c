#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that return a pointer to a 2d array
 * @width: column number
 * @height: row number
 *
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **)malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);
	
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
	}
	return (ptr);
}
