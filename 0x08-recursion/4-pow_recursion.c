#include "main.h"

/**
 * _pow_recursion - return the value of x to raised to power of y
 * @x: base number
 * @y: power
 *
 * Return: always 0 sucsess
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)

		return (-1);

	else if (y == 0)

		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
