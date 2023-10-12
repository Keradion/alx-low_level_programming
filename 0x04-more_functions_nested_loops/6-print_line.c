#include <stdio.h>
#include "main.h"

/**
 * print_line - prints line of give number
 * @n: int number of times
 *
 * Return: void
 */

void print_line(int n)
{
int i = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (i < n)
{
_putchar(95);
i++;
}
}
_putchar('\n');
}
