#include "main.h"
#include <stdio.h>

/**
 * print_last_digit prints last digit of a given number
 *@n: number
 *@x: last_digit
 * Return: value of last digit
 */

int print_last_digit(int n)
{
if (n < 0)
n = -n;
int x = n % 10;
if (x < 0)
x = -x; 
printf("%d", x);
return (x);
}
