#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square followed by a line
 * @size: int size of square
 * Return: void
 */

void print_square(int size)
{
int i = 0;
int j = 0;
if (size <= 0)
{
_putchar('\n');
}
else
{
while (i < size)
{
while (j < size)
{
_putchar(35);
j++;
}
++i;
j = 0;
_putchar('\n');
}
}
