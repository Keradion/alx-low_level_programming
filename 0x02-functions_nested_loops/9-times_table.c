#include "main.h"
#include <stdio.h>

/**
 * times_table - print the 9 times table starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
int i = 0;
int j = 0;

while (i < 10)
{
while (j < 10)
{
printf("%d", (i * j));
_putchar(',');
_putchar(' ');
j++;
}
_putchar('\n');
j = 0;
i++;
}
}
