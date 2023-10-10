#include "main.h"
#include <stdio.h>

/**
 *_abs() - determine the absolute value of a given number
 *@n: number
 * Return: Always 0
 */

int _abs(int n)
{
if (n > 0)
return (n);
else if (n == 0)
return (0);
else
return (-n);
}
