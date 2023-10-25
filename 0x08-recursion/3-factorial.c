#include "main.h"

/**
 * factoral - retun a fuctorial of a given number n
 * @n: number
 *
 * Return: always 0 sucess
 */
int factorial(int n)
{
	if (n == 0)

		return (1);

	else if (n > 0)

		return (n * factorial(n - 1));
	else
		return (-1);

}

