#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string of bits
 *
 * Return: 0 or deciaml
 *
 */
unsigned int binary_to_uint(const char *b)
{
	const char *temp = b;
	int bits = 0;
	unsigned int decimal = 0;
	int i = 1;

	if (b == NULL)
		return (0);
	while (*temp != '\0')
	{
		bits++; /* counting number of bits */
		temp++;
	}


	for (i = 1; i <= bits; i++)
	{
		if (*b != '1' && *b != '0')
			return (0);

		decimal = decimal + ((*b - '0') * power(bits - i));
		b++;

	}
	return (decimal);
}
/**
 * power - computer exponentation
 * @n: power
 *
 * Return: result of exponentation
 */
int power(int n)
{
	int result = 1;
	int exponent = n;
	int i = 1;

	if (exponent == 0)
		return (1);
	while (i <= exponent)
	{
		result = result * 2;
		i++;
	}
	return (result);
}
