#include "main.h"

/**
 * isupper - check an alphabetic upper case charachter
 *
 * Return: 1 uppercase 0  not
 */

int _isupper(int c)
{
if ((96 < c) && (c < 123))
return (1);
else
return (0);
}
