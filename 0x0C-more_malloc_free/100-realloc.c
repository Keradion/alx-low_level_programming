#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc & free
 * @ptr: pointer to previous block of memory
 * @old_size: bytes of memory pointed by ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* pointer to the new memory block */
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)

	/* old_size is zero*/

		ptr = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		/* This will set the previous memory free*/
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	/* new block with size equivalent to new_size + old_size*/

		ptr = malloc(new_size + old_size);

	/* pointer to the newlly allocated block will be returned*/

	return (ptr);
}
