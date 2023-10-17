#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n number of integer array
 * @*a: pointer integer variable
 * @n: integer variable
 *
 * Return: void 
 */

void print_array(int *a, int n)
{
	int i = 0;

	for ( i = 0; i <= n; i++)
	{
		printf("%d ", a[i]);

	}
	printf("\n");
}
