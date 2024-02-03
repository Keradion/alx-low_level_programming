#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals of a square matrix 
 * @a: array of matrix
 * @size: row - digonal 
 *
 * Return: void;
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = i; j == i ; j++)
		{
			sum = sum + a[i][j];
		}
	}

	printf("%d", sum);

	i = 0;
	j = 0;
	sum = 0;

	for (i = 0; i < size; i++)
	{
		for ( j = 2 - i; j == 2 - i ; j--)
		{
			sum = sum + a[i][j];
		}
	}

	printf("%d", sum);
	



}
