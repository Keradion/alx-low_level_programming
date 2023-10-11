#include "main.h"

/**
 * islower - check lowercase letters
 *
 * Return: 1 if lowercase , 0 otherwise
 */

int _islower(int c)
{
if ('a' <= c && c <= 'z')
return (1);
else
return (0);
}

