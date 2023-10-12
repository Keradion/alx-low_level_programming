#include "main.h"

/**
 * isupper - check an alphabetic upper case charachter
 * @c: alphabetic charachter
 *
 * Return: 1 uppercase 0  not
 */

int _isupper(int c)
{
if ((64 < c) && (c < 92))
return (1);
else
return (0);
}
