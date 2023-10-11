#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of a given number
 *@n: number
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int last_digit;
if (n < 0)
n = -n;
last_digit = n % 10;
_putchar(last_digit + '0');
return (last_digit);
}
