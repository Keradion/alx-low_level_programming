#include "main.h"

/**
 * _isupper - check an alphabetic upper case charachter
 * @c: alphabetic charachter
 *
 * Return: Always 1 0r 0
 */

int _isupper(int c)
{
if ((c > 64) && (c < 92))
return (1);
else
return (0);
}
