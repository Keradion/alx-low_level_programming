#include "main.h"

/**
 * reverse_array - reverse the content of an arry of integers
 * @a: pointer to array
 * @n - size of array elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
        int size = n - 1;
	int j = size;

	while ( i < j )
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
