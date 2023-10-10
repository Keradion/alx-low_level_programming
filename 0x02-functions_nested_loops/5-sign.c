#include "main.h"

/*
 * print_sign() - a function that prints the sign of a number
 * 
 * Return: 1 and print + if n > 0
 * Return: 0 and prints 0 if n=0
 * Return: -1 and prints - if n < 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('48');
return (0);
}
}
