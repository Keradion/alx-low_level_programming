#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on array element
 * @array: pointer to an array
 * @size: size of the array
 * @action: pointer to a function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
