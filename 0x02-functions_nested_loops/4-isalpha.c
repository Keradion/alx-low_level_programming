#include "main.h"
/**
 * _isalpha - check for alphabetic charachter
 * @c: ASCII value
 *
 * Return: 1 if alphabetic, 0 if none
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
