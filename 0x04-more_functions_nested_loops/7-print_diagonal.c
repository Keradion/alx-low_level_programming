#include "main.h"
#include <stdio.h>
/**
 * print_diagonal _ prints diagonal nX
 * @n - int indicate times
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 1;
	int j = 1;
	int k = 1;
	
	while(i <= n)
	{
		while(j <= i - 1)
		{
			_putchar(' ');
			j++;
		}
		while (k <= 1)
		{
			_putchar(92);
			_putchar('\n');
		k++;
		}
		k = 1;
		j = 1;
		i++;
	}
}
