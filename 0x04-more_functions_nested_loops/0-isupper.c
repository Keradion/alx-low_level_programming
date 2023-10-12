#include "main.h"

/**
 * _isupper - check an alphabetic upper case charachter
 * @c: char to check
 *
 * Return: Always 1 or 0
 */

int _isupper(int c)
{
if (c >= 'A'  &&  c <= 'Z')
return (1);
else
return (0);
}
