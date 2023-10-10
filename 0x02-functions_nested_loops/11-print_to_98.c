#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers from n upto 98
 *@n: number
 * Return: void
 */

void print_to_98(int n)
{
if (n > 98)
{
while (n > 98)
{
printf("%d ", n--);
putchar(',');
putchar(' ');
}
}
else
{
while (n < 98)
{
printf("%d ", n++);
putchar(',');
putchar(' ');
}
}
printf("%d", 98);
putchar('\n');
}
