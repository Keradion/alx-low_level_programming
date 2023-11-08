#include "function_pointers.h"

/**
 * int_index - searches for an integer inside an array
 * @array: pointer to an array of integers
 * @size: size of the array
 * @cmp: pointer to a function used to compare values
 *
 * Return: -1 if element doesnt occur of size <= 0
 * return index of element for which cmp doesnt return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int response = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{

		response = cmp(array[i]);
		if (response >= 1)
			return (i);
	}
	return (-1);
}
