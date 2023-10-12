#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print from 0-9 except 2&g
 * Return: void
 */

void print_most_numbers(void)
{
int i = 0;
while (i < 10)
{
if (i != 2 && i != 4)
printf("%d", i);
i++;
}
printf("\n");
}
