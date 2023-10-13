#include "main.h"
#include <stdio.h>

/**
 * more_numbers - a function that prints numbers from 0 - 14 10x
 *
 * Return: void
 */

void more_numbers(void)
{
int i = 48;
int j = 48;
int k = 48;
while (k < 58)
{
while (i < 58)
{
_putchar(i);
i++;
}
i = 49;
while (j < 53)
{
_putchar(i);
_putchar(j);
j++;
}
printf("\n");
i = 48;
j = 48;
k++;
}
}
